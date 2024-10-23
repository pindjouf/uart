`timescale 1ns/1ps

module dff (
    input d,
    input clk,
    input reset,
    output reg baud,
    output reg [3:0] shift_counter,
    output reg q
);

    baudUnit baudGen (
        .clk(clk),
        .reset(reset),
        .baud(baud)
    );

always @ (posedge baud or negedge baud) begin
    if (reset) begin
        q <= 1'b0;
        shift_counter <= 0;
    end else begin
        shift_counter <= shift_counter + 1;
        q <= d;
    end
end
    
endmodule
