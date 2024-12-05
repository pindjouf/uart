`timescale 1ns/1ps
// `include "states.svh"

module transmitter (
    input [7:0] bus,
    input clk,
    input rst,
    output reg tx
    );

    reg baud;
    reg [9:0] shift_register;
    reg [3:0] shift_counter;
    state cur_state, nxt_state;

    baudUnit dut (
        .clk(clk),
        .baud(baud)
    );

always @(posedge clk or posedge rst) begin
    if (rst) begin
        cur_state <= IDLE;
    end else begin
        cur_state <= nxt_state;
    end
end

always @(posedge baud) begin
        case (cur_state)
            IDLE: begin
                shift_counter <= 4'b0000;
                tx <= 1'b1;
                if (bus >= 8'b00000001) begin
                    nxt_state <= WRITE;
                end else begin
                    nxt_state <= IDLE;
                end
            end
            WRITE: begin
                shift_register <= {1'b1, bus, 1'b0};
                if (shift_register == {1'b1, bus, 1'b0}) begin
                    nxt_state <= SHIFT;
                end else begin
                    nxt_state <= WRITE;
                end
            end
            SHIFT: begin
                tx <= shift_register[0];
                shift_register <= {1'b1, shift_register[9:1]};
                shift_counter <= shift_counter + 1'b1;
                if (shift_counter == 4'b1001) begin
                    nxt_state <= CLEAR;
                end else begin
                    nxt_state <= SHIFT;
                end
            end
            CLEAR: begin
                shift_counter <= 4'b0000;
                shift_register <= 10'b0000000000;
                if (shift_register == 10'b0000000000) begin
                    nxt_state <= IDLE;
                end else begin
                    nxt_state <= CLEAR;
                end
            end
        default: begin
            nxt_state <= IDLE;
        end
        endcase
    end
endmodule // transmitter
