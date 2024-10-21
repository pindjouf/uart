# UART

A **Universal Asynchronous Receiver/Transmitter (UART)** in Verilog. Keep in mind, most of this work has been done on a 5+ layover journey so some of the code is verbose and has obviously been coded with a tired mind! It's still a work in progress but making great strides. Come along for the journey! 😎

## 🚧 Current Status

- ✅ **Baud Rate Generator** unit completed
- ✅ **transmitter module** module operational
- 🔄 Actively developing the **receiver module**

<img src="/assets/sipo.jpg" alt="UART Block Diagram" style="width: 50%;">

---

## 🎯 Project Goals

Transmit **"Hello, World!"** in bytes:

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
├── assets
│   └── sipo.jpg            # Diagrams and visual aids
├── README.md                # This file!
├── rtl                      # RTL modules (core logic)
│   ├── baudUnit.v           # Baud Rate Generator
│   ├── dff.v                # D Flip-Flop for register-based logic
│   ├── pisoUnit.v           # PISO (Parallel-In Serial-Out) unit
│   ├── sipoUnit.v           # SIPO (Serial-In Parallel-Out) unit
│   └── transmitter.v        # UART transmitter
├── sim                      # Simulation outputs
│   └── waveforms            # Generated waveforms (output)
└── tb                       # Testbenches for simulation
    ├── baudTest.v           # Testbench for Baud Unit
    ├── pisoTest.v           # Testbench for PISO Unit
    ├── sipoTest.v           # Testbench for SIPO Unit
    └── transmitter_tb.v     # Testbench for Transmitter (new and shiny!)
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
   - [ ] Design receiver module
   - [ ] Implement start bit detection
   - [ ] Add data sampling logic
   - [ ] Implement stop bit checking

4. **Top-Level UART Module**
   - [ ] Integrate transmitter and receiver modules
   - [ ] Add configurable options (baud rate, data bits)

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
