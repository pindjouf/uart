`timescale 1ns/1ps
`include "states.svh"

module transmitter(
    input clk,
    input rstn,
    input reg [7:0] bus,
    output baud,
    output sample,
    output rx
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
                if (rx == 0) begin
                    nxt_state <= START;
                end
            end
            WRITE: begin
               nxt_state <= SHIFT;
               counter++;
            end
            SHIFT: begin
                bus <= {bus[6:0], rx};
                counter++;
                if (counter == 10) begin
                    if (rx == 1) begin
                        nxt_state <= STOP;
                    end
                end
            end
            CLEAR: begin
                nxt_state <= IDLE;
            end
        endcase
    end
endmodule
