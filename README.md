# UART (In Development)

This project aims to implement a Universal Asynchronous Receiver/Transmitter (UART) in Verilog. The UART is currently under active development and not yet fully functional.

## Current Status

- Basic shift register (PISO - Parallel In Serial Out) unit implemented

<img src="/assets/sipo.jpg" alt="gpt_block_diagram" style="width: 50%;">

## Project Structure

```txt
uart/
├── assets
├── README.md
├── rtl
│   └── sipoUnit.v
│   └── dff.v
│   └── pisoUnit.v
├── sim
│   └── waveforms
└── tb
    └── sipoTest.v
    └── pisoTest.v
```

## Goal

echo "Hello, World!" with bytes:

| Character | ASCII (Decimal) | ASCII (Binary) |
|-----------|-----------------|----------------|
| H         | 72              | 01001000       |
| e         | 101             | 01100101       |
| l         | 108             | 01101100       |
| l         | 108             | 01101100       |
| o         | 111             | 01101111       |
| ,         | 44              | 00101100       |
| (space)   | 32              | 00100000       |
| W         | 87              | 01010111       |
| o         | 111             | 01101111       |
| r         | 114             | 01110010       |
| l         | 108             | 01101100       |
| d         | 100             | 01100100       |
| !         | 33              | 00100001       |

## Roadmap

1. Complete SIPO unit
   - [x] Implement basic shift register
   - [x] Add parameterization for register width
   - [x] Implement and test hold functionality

2. Develop UART transmitter
   - [ ] Design transmitter module
   - [x] Implement parallel-in serial-out (PISO) functionality
   - [ ] Add start and stop bit generation
   - [ ] Implement baud rate generator

3. Develop UART receiver
   - [ ] Design receiver module
   - [ ] Implement start bit detection
   - [ ] Add data sampling logic
   - [ ] Implement stop bit checking

4. Create top-level UART module
   - [ ] Integrate transmitter and receiver
   - [ ] Add configuration options (e.g., baud rate, data bits)

5. Develop comprehensive testbench
   - [ ] Create testbench for individual modules
   - [ ] Develop full UART system testbench
   - [ ] Implement various test scenarios

6. Documentation and cleanup
   - [ ] Complete inline code documentation
   - [ ] Finalize README with usage instructions
   - [ ] Create waveform diagrams for key operations

7. Optional enhancements
   - [ ] Add parity bit support
   - [ ] Implement FIFO buffers for transmit and receive
   - [ ] Add oversampling for improved noise immunity

## Usage

Currently, the project is not ready for use. Check back for updates as development progresses.

## Contributing

This project is in early development. If you're interested in contributing, please check the roadmap for areas that need work. (not accepting PR's until I've implemented a solution myself)
