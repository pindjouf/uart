`timescale 1ns/1ps

module sipoUnit (
    input wire data_in,
    input reg reset,
    input wire clk,
    output reg [7:0] q
);

    dff dff0 (
        .d(data_in),
        .reset(reset),
        .clk(clk),
        .q(q[0])
        );

    generate
        for (genvar i = 0; i < 7; i++) begin
            dff dff_inst (
                .d(q[i]),
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
