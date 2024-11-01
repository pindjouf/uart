`timescale 1ns/1ps

module baudUnit (
    input clk,
    input reset,
    output reg baud,
    output reg sample
);

parameter SYSTEM_CLOCK_FREQ = 100000000; // 100 MHz
parameter BAUD_RATE = 115200;

localparam int DIVIDER = SYSTEM_CLOCK_FREQ / BAUD_RATE;

reg [15:0] counter;

always @(posedge clk or posedge reset) begin
    // if (reset) begin
        // counter <= 0;
        // baud <= 0;
        // sample <= 0;
    if (counter >= DIVIDER - 1) begin
        counter <= 0;
        baud <= ~baud;
        sample <= 0;
    end else if (counter >= DIVIDER / 2) begin
        sample <= 1;
        counter <= counter + 1;
    end else begin
        counter <= counter + 1;
    end
end

endmodule
