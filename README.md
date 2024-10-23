# UART

A **Universal Asynchronous Receiver/Transmitter (UART)** in Verilog. Keep in mind, most of this work has been done on a 5+ layover journey so some of the code is verbose and has obviously been coded with a tired mind! It's a wip btw.

## 🚧 Current Status

- ✅ **Baud Rate Generator** unit completed
- ✅ **Transmitter module** module operational
- 🔄 Actively fixing the **receiver module**
- 🔄 Actively developing the **uart module**

---

## 🎯 Project Goals

Echo **"Hello, World!"** in bytes, as per wikipedia:
> **echo** is the local display of data, either initially as it is **local**ly sourced and sent, or finally as a copy of it is received back from a **remote** destination. **Local echo** is where the local sending equipment displays the outgoing sent data. **Remote echo** is where the display is a return copy of data as received remotely.

| Character | ASCII (Hex) | ASCII (Binary)  |
|-----------|-------------|-----------------|
| H         | 0x48        | 01001000        |
| e         | 0x65        | 01100101        |
| l         | 0x6C        | 01101100        |
| l         | 0x6C        | 01101100        |
| o         | 0x6F        | 01101111        |
| ,         | 0x2C        | 00101100        |
| (space)   | 0x20        | 00100000        |
| W         | 0x57        | 01010111        |
| o         | 0x6F        | 01101111        |
| r         | 0x72        | 01110010        |
| l         | 0x6C        | 01101100        |
| d         | 0x64        | 01100100        |
| !         | 0x21        | 00100001        |

## 📂 Project Structure

Here's what the project layout looks like:

```bash
.
├── README.md                # This file!
├── rtl                      # RTL modules (core logic)
│   ├── baudUnit.v           # Baud Rate Generator
│   ├── dff.v                # D Flip-Flop for register-based logic
│   ├── pisoUnit.v           # PISO (Parallel-In Serial-Out) unit
│   ├── sipoUnit.v           # SIPO (Serial-In Parallel-Out) unit
│   └── transmitter.v        # UART transmitter
│   └── receiver.v        # UART receiver
│   └── uart.v        # UART top-module
├── sim                      # Simulation outputs
│   └── waveforms            # Generated waveforms (output)
└── tb                       # Testbenches for simulation
    ├── baudTest.v           # Testbench for Baud Unit
    ├── pisoTest.v           # Testbench for PISO Unit
    ├── sipoTest.v           # Testbench for SIPO Unit
    └── transmitterTest.v     # Testbench for Transmitter
    └── receiverTest.v     # Testbench for Receiver 
```

## 🛣️ Roadmap

### Core Components

1. **Complete SIPO unit** (Serial-In Parallel-Out)
   - [x] Implement basic shift register
   - [x] Add parameterization for register width
   - [x] Implement and test hold functionality

2. **Develop UART Transmitter**
   - [x] Design and implement **Parallel-In Serial-Out (PISO)** functionality
   - [x] Add **baud rate generator**
   - [x] Integrate **start and stop bit** generation
   - [x] Implement **new testbench** for thorough validation

3. **Develop UART Receiver**
   - [x] Design receiver module
   - [ ] Implement start bit detection
   - [ ] Add data sampling logic
   - [ ] Implement stop bit checking

4. **Top-Level UART Module**
   - [x] Integrate transmitter and receiver modules
   - [x] Add configurable options (baud rate, data bits)

5. **Develop Comprehensive Testbench**
   - [x] Test individual modules
   - [ ] Develop full UART system testbench
   - [ ] Add various test scenarios to cover edge cases

### 🛠️ Optional Enhancements

- [ ] Add **parity bit** support
- [ ] Implement **FIFO buffers** for transmit/receive queues
- [ ] Add **oversampling** for improved noise immunity

---

## 💻 Usage

The project is still in active development and isn't ready for full-scale use. Stay tuned for updates as we progress toward full functionality.

---

## 🤝 Contributing

🛑 **Currently not accepting PRs** until core functionality is implemented. If you'd like to contribute, keep an eye on the **roadmap** for areas needing work once this initial phase is done!

Feel free to fork, explore, and come back soon!
