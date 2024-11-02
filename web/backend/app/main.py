from fastapi import FastAPI, Request
from fastapi.middleware.cors import CORSMiddleware
from pydantic import BaseModel
from uart.shift_registers import sipo, piso
from dataclasses import dataclass
from typing import List

@dataclass
class UARTConfig:
    baud_rate: int = 115200
    bit_duration: float = 1.0 / baud_rate
    
uart_config = UARTConfig()

@dataclass
class SignalState:
    level: int       # 0 or 1
    time: float      # timestamp
    register: int    # current register state
    bit_type: str   # "start", "data", "stop"

app = FastAPI()

app.add_middleware(
    CORSMiddleware,
    allow_origins=["http://localhost:5173"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

class Message(BaseModel):
    message: str

@app.post("/echo")
async def echo(msg: Message):
    current_time = 0.0  # init
    rx_signals: List[SignalState] = []
    tx_signals: List[SignalState] = []
    register = 0b00000000

    # rx
    for char in msg.message:
        byte = format(ord(char), '08b')
        
        # start
        rx_signals.append(SignalState(
            level=0,
            time=current_time,
            register=register,
            bit_type="start"
        ))
        current_time += uart_config.bit_duration

        # data
        for bit in byte:
            rx_signals.append(SignalState(
                level=int(bit),
                time=current_time,
                register=register,
                bit_type="data"
            ))
            register = sipo(register, int(bit))
            current_time += uart_config.bit_duration

        # stop
        rx_signals.append(SignalState(
            level=1,
            time=current_time,
            register=register,
            bit_type="stop"
        ))
        current_time += uart_config.bit_duration

    # lil gap between rx and tx
    current_time += uart_config.bit_duration * 2

    # tx
    for char in msg.message:
        byte = format(ord(char), '08b')
        
        # start
        tx_signals.append(SignalState(
            level=0,
            time=current_time,
            register=register,
            bit_type="start"
        ))
        current_time += uart_config.bit_duration
        
        # data
        for bit in byte:
            tx_signals.append(SignalState(
                level=int(bit),
                time=current_time,
                register=register,
                bit_type="data"
            ))
            register = sipo(register, int(bit))
            current_time += uart_config.bit_duration
            
        # stop
        tx_signals.append(SignalState(
            level=1,
            time=current_time,
            register=register,
            bit_type="stop"
        ))
        current_time += uart_config.bit_duration
    
    return {
        "ohce": msg.message,
        "timing": {
            "rx_signals": [{"time": s.time, "level": s.level, "register": s.register} for s in rx_signals],
            "tx_signals": [{"time": s.time, "level": s.level, "register": s.register} for s in tx_signals],
            "bit_duration": uart_config.bit_duration
        }
    }

@app.get("/ping")
async def ping():
    return {"message": "pong"}
