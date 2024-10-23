`timescale 1ns/1ps

module uart (
    input clk,
    input p_data,
    input s_data,
    input reset,
    input hold_value,
    output baud,
    output [7:0] rx,
    output tx,
    output [3:0] bit_count,
    output start
);

    transmitter txUnit(
        .clk(clk),
        .data(p_data),
        .reset(reset),
        .baud(baud),
        .tx(),
        .bit_count(bit_count),
        .start(start)
    );

    receiver rxUnit(
        .clk(clk),
        .data(s_data),
        .reset(reset),
        .hold_value(hold_value),
        .baud(baud),
        .rx(),
        .bit_count(bit_count),
        .start(start)
    );

    baudUnit baudGen (
        .clk(clk),
        .baud(baud),
        .reset(reset)
    );

endmodule
