`timescale 1ns/1ps
`include "states.svh"

module receiver (
    input rx,
    input clk,
    input rst,
    output [7:0] bus
    );
