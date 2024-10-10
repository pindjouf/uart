# UART (In Development)

This project aims to implement a Universal Asynchronous Receiver/Transmitter (UART) in Verilog. The UART is currently under active development and not yet fully functional.

## Current Status

- Basic shift register (SIPO - Serial In Parallel Out) unit implemented
- D flip-flop module created
- Initial project structure established

![gpt_block_diagram](/assets/sipo.jpg) 

## Project Structure

```txt
uart/
├── assets
├── README.md
├── rtl
│   └── sipoUnit.v
├── sim
│   └── waveforms
└── tb
    └── sipoTest.v
```

## Roadmap

1. Complete SIPO unit
   - [x] Implement basic shift register
   - [ ] Add parameterization for register width
   - [ ] Implement and test hold functionality

2. Develop UART transmitter
   - [ ] Design transmitter module
   - [ ] Implement parallel-in serial-out (PISO) functionality
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
