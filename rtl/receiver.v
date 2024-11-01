`timescale 1ns/1ps

module receiver (
    input clk,
    input data,
    input reset,
    input hold_value,
    output baud,
    output [7:0] rx,
    output sample,
    // output [3:0] bit_count,
    output start
);

    sipoUnit sipo (
        .data_in(data),
        .hold_value(hold_value),
        .reset(reset),
        // .bit_count(bit_count),
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
