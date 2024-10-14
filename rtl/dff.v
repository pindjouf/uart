`timescale 1ns/1ps

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
