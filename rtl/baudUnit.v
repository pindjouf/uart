`timescale 1ns/1ps

module baudUnit (
    input clk,
    input reset,
    output reg baud
);

parameter SYSTEM_CLOCK_FREQ = 100000000; // 100 MHz
parameter BAUD_RATE = 115200;

localparam int DIVIDER = SYSTEM_CLOCK_FREQ / BAUD_RATE;

reg [15:0] counter;

always @(posedge clk or posedge reset) begin
    if (reset) begin
        counter <= 0;
        baud <= 0;
    end else if (counter >= DIVIDER - 1) begin
        counter <= 0;
        baud <= ~baud;
    end else begin
        counter <= counter + 1;
    end
end

endmodule
