`timescale 1ns/1ps

module transmitter #(parameter WIDTH = 8) (
        input clk,
        input [7:0] data,
        input reset,
        output baud,
        output tx,
        output [3:0] bit_count,
        output start
    );

    pisoUnit piso (
        .clk(clk),
        .reset(reset),
        .data(data),
        .shift_counter(bit_count),
        .q(tx),
        .start(start)
    );
    
    baudUnit baudGen (
        .clk(clk),
        .baud(baud),
        .reset(reset)
    );

endmodule
