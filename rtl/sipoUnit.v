`timescale 1ns/1ps

module sipoUnit (
    input wire data_in,
    input wire clk,
    output reg [7:0] q
);

    dff dff0 (
        .d(data_in),
        .clk(clk),
        .q(q[0])
        );
    
    dff dff1 (
        .d(q[0]),
        .clk(clk),
        .q(q[1])
        );

    dff dff2 (
        .d(q[1]),
        .clk(clk),
        .q(q[2])
        );

    dff dff3 (
        .d(q[2]),
        .clk(clk),
        .q(q[3])
        );

    dff dff4 (
        .d(q[3]),
        .clk(clk),
        .q(q[4])
        );

    dff dff5 (
        .d(q[4]),
        .clk(clk),
        .q(q[5])
        );

    dff dff6 (
        .d(q[5]),
        .clk(clk),
        .q(q[6])
        );

    dff dff7 (
        .d(q[6]),
        .clk(clk),
        .q(q[7])
        );
endmodule

module dff (
    input d,
    input clk,
    output reg q
);

always @ (posedge clk or negedge clk) begin
    q <= d;
end
    
endmodule
