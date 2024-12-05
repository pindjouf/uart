# UART

A **Universal Asynchronous Receiver/Transmitter (UART)** with a configurable baud rate, implemented in Verilog. While functional, please note that I will revisit and refactor this project with more sensible and clean code as I continue improving my Verilog skills.

## 🎯 Project Goals

Echo **"Hello, World!"** in bytes, as per Wikipedia:
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
│   ├── transmitter.v        # UART transmitter
│   ├── receiver.v           # UART receiver
│   └── uart.v               # UART top-module
├── sim                      # Simulation outputs
│   └── waveforms            # Generated waveforms (output)
└── tb                       # Testbenches for simulation
    ├── baudTest.v           # Testbench for Baud Unit
    ├── uartTest.v           # Testbench for UART top-module
    ├── transmitterTest.v    # Testbench for Transmitter
    └── receiverTest.v       # Testbench for Receiver 
```

Keep in mind, this project was primarily developed during a tiring 5+ layover journey, so some of the code might be verbose or less polished. Future revisions will address these shortcomings.
