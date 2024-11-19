`timescale 1ns/1ps
`include "states.svh"

module receiver(
    input clk,
    input rstn,
    input rx,
    output baud,
    output sample,
    output reg [7:0] bus
);

    baudUnit dut (
        .clk(clk),
        .baud(baud),
        .sample(sample)
    );

    state cur_state, nxt_state;
    reg [3:0] counter;

    always @(posedge clk) begin
        if (!rstn) begin
            cur_state <= IDLE;
        end else begin
            cur_state <= nxt_state;
        end
    end

    always @(posedge sample) begin
        case (cur_state)
            IDLE: begin
                bus <= rx;
                counter <= 0;
                if (rx == 0) begin
                    nxt_state <= START;
                end
            end
            START: begin
               nxt_state <= SHIFT;
               counter <= counter + 1;
            end
            SHIFT: begin
                bus <= {bus[6:0], rx};
                counter <= counter + 1;
                if (counter == 9) begin
                    if (rx == 1) begin
                        nxt_state <= STOP;
                    end
                end
            end
            STOP: begin
                nxt_state <= IDLE;
                counter <= 0;
            end
        endcase
    end
endmodule
