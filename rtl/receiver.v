`timescale 1ns/1ps
`include "states.svh"

module receiver (
    input rx,
    input clk,
    input rst,
    output reg [7:0] bus
    );

    reg baud;
    reg sample;
    reg [7:0] shift_register;
    reg [3:0] shift_counter;
    state cur_state, nxt_state;

    baudUnit dut (
        .clk(clk),
        .baud(baud),
        .sample(sample)
    );

always @(posedge clk or posedge rst) begin
    if (rst) begin
        cur_state <= IDLE;
    end else begin
        cur_state <= nxt_state;
    end
end

always @(posedge sample) begin
        case (cur_state)
            IDLE: begin
                shift_counter <= 4'b0000;
                bus <= 8'b00000000;
                if (rx == 1'b0) begin
                    nxt_state <= SHIFT;
                end else begin
                    nxt_state <= IDLE;
                end
            end
            SHIFT: begin
                shift_register <= {rx, shift_register[7:1]};
                shift_counter <= shift_counter + 1'b1;
                if (shift_counter == 4'b1000 && rx == 1'b1) begin
                    bus <= shift_register;
                    nxt_state <= STOP;
                    shift_register <= 8'b00000000;
                end else begin
                    nxt_state <= SHIFT;
                end
            end
            STOP: begin
                shift_counter <= 4'b0000;
                if (shift_register == 8'b00000000) begin
                    nxt_state <= IDLE;
                end else begin
                    nxt_state <= STOP;
                end
            end
        default: begin
            nxt_state <= IDLE;
        end
        endcase
    end
endmodule // receiver
