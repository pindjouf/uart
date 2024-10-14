`timescale 1ns/1ps

module pisoUnit #(parameter WIDTH = 8) (
    input clk,
    input [WIDTH-1:0] data,
    input reset,
    output reg q
);

    reg [WIDTH-1:0] shift_reg;
    // reg [WIDTH-1:0] hold_reg;
    reg [3:0] shift_counter;

    always @ (posedge clk or posedge reset) begin
        if (reset) begin
            shift_reg <= 0;
            // hold_reg <= 0;
            shift_counter <= 0;
            q <= 1'b0;
        end else begin
            shift_counter <= shift_counter + 1;
            if (shift_counter == 0) begin
                shift_reg <= data;
            end else begin
                q <= shift_reg[0];
                shift_reg <= shift_reg >> 1;
            end
        end
    end

endmodule
