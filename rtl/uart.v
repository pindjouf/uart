`timescale 1ns/1ps
`include "states.svh"

module uart (
    input [7:0] i_bus,
    input rx, clk, rst,
    output [7:0] o_bus,
    output tx
    );

    reg baud, sample;

    baudUnit baud_rate_gen (
        .clk(clk),
        .baud(baud),
        .sample(sample)
    );

    transmitter tx_unit (
        .bus(i_bus),
        .clk(clk),
        .rst(rst),
        .tx(tx)
    );

    receiver rx_unit (
        .rx(rx),
        .clk(clk),
        .rst(rst),
        .bus(o_bus)
    );

    endmodule
