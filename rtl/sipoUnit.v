`timescale 1ns/1ps

module sipoUnit #(parameter WIDTH = 8) (
    input wire data_in,
    input wire hold_value,
    input wire reset,
    input wire clk,
    output reg baud,
    output reg start,
    output reg [3:0] bit_count,
    output reg [WIDTH-1:0] q
);

    baudUnit dut (
        .clk(clk),
        .reset(reset),
        .baud(baud)
    );

    dff dff0 (
        .d(hold_value ? q[0] : data_in),
        .reset(reset),
        .clk(clk),
        .q(q[0])
        );

    generate
        for (genvar i = 0; i < WIDTH-1; i++) begin
            dff dff_inst (
                .d(hold_value ? q[i+1] : q[i]),
                .reset(reset),
                .clk(clk),
                .q(q[i+1])
            );
        end
    endgenerate

    always @(posedge baud or negedge baud) begin
        if (bit_count == 1) begin
            if (q[0] == 0) begin
                start <= 1;
            end else begin
                start <= 0;
            end
        end
    end

endmodule
