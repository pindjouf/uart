`timescale 1ns/1ps

module pisoUnit #(parameter WIDTH = 8) (
    input clk,
    input [WIDTH-1:0] data,
    input reset,
    input start,
    output reg baud,
    output reg [3:0] shift_counter,
    output reg q
);

    parameter MAX_WIDTH = WIDTH + 2;
    
    reg [WIDTH+1:0] shift_reg;
    reg baud_toggle;
    reg start_toggle;
    assign baud_edge = baud & (~baud_toggle);
    assign start_edge = start & (~start_toggle);

    baudUnit dut (
        .clk(clk),
        .reset(reset),
        .baud(baud)
    );

    always @ (posedge clk or posedge reset) begin
        if (reset) begin
            q <= 1;
            shift_reg <= 1;
            shift_counter <= 0;
        end else begin
            baud_toggle <= baud;
            start_toggle <= start;
        end if (shift_reg == 0) begin
            q <= 1;
        end if (start_edge) begin
            shift_reg <= {1'b1, data, 1'b0};
        end if (baud_edge) begin
            q <= shift_reg[0];
            shift_reg <= shift_reg >> 1;
            if (shift_counter < MAX_WIDTH) begin
                shift_counter <= shift_counter + 1;
            end else begin
                shift_counter <= 0;
            end if (shift_reg == 0) begin
                q <= 1;
            end
        end
    end

endmodule
