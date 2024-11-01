`timescale 1ns/1ps

module receiver (
    input clk,
    input data,
    input reset,
    input hold_value,
    output baud,
    output [7:0] rx,
    output sample
);

    sipoUnit sipo (
        .data_in(data),
        .hold_value(hold_value),
        .reset(reset),
        .baud(baud),
        .clk(clk),
        .q(rx)
    );

    baudUnit baudGen (
        .clk(clk),
        .baud(baud),
        .reset(reset),
        .sample(sample)
    );

endmodule
