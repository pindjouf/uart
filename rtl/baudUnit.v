`timescale 1ns/1ps

module baudUnit #(
    SYSTEM_CLOCK_FREQ = 100000000,
    BAUD_RATE = 115200
    )(
    input clk,
    output reg baud,
    output reg sample
    );

localparam int DIVIDER = SYSTEM_CLOCK_FREQ / BAUD_RATE;

reg [15:0] counter;

always @(posedge clk) begin
    if (counter >= DIVIDER - 1) begin
        counter <= 0;
        baud <= ~baud;
        sample <= 0;
    end else if (baud && counter >= DIVIDER / 2) begin
        sample <= 1;
        counter <= counter + 1;
    end else begin
        counter <= counter + 1;
    end
end

endmodule
