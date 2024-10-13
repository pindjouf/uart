`timescale 1ns/1ps

module sipoUnit #(parameter WIDTH = 8) (
    input wire data_in,
    input wire hold_value,
    input wire reset,
    input wire clk,
    output reg [WIDTH-1:0] q
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
endmodule

module dff (
    input d,
    input clk,
    input reg reset,
    output reg q
);

always @ (posedge clk or negedge clk) begin
    if (reset) begin
        q <= 1'b0;
    end else begin
        q <= d;
    end
end
    
endmodule
