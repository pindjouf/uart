`timescale 1ns/1ps
`include "states.svh"

module transmitter(
    input clk,
    input rstn,
    input [7:0] bus,
    output baud,
    output reg tx
);

    baudUnit dut (
        .clk(clk),
        .baud(baud)
    );

    state cur_state, nxt_state;
    reg [9:0] shift_register;
    reg [3:0] counter;

    always @(posedge clk) begin
        if (!rstn) begin
            cur_state <= IDLE;
        end else begin
            cur_state <= nxt_state;
        end
    end

    always @(posedge baud) begin
        case (cur_state)
            IDLE: begin
                tx <= 1;
                shift_register <= 10'b1111111111;
                counter <= 0;
                nxt_state <= WRITE;
            end

            WRITE: begin
                shift_register <= {1'b0, bus, 1'b1};
                counter <= 0;
                nxt_state <= SHIFT;
            end

            SHIFT: begin
                tx <= shift_register[0];
                shift_register <= shift_register >> 1;
                counter <= counter + 1;

                if (counter == 9) begin
                    nxt_state <= CLEAR;    
                end else begin
                    nxt_state <= SHIFT;    
                end
            end

            CLEAR: begin
                counter <= 0;
                tx <= 1;
                nxt_state <= IDLE;
            end
        endcase
    end
endmodule
