`timescale 1ns/1ps

module dff (
    input d,
    input clk,
    input reset,
    output reg baud,
    output reg [3:0] baud_counter,
    output reg [3:0] shift_counter,
    output reg sample,
    output reg start,
    output reg q
);

    baudUnit baudGen (
        .clk(clk),
        .reset(reset),
        .baud(baud),
        .sample(sample)
    );

always @ (posedge sample) begin
    if (reset) begin
        q <= 1'b0;
        shift_counter <= 0;
    end else if (start) begin
        q <= d;
        shift_counter <= shift_counter + 1;
    end // else if (shift_counter == 10 && ) begin
    // end
end

always @(posedge baud) begin
    if (reset) begin
        baud_counter <= 0;
        start <= 0;
    end else begin
        baud_counter <= baud_counter + 1;
    end if (baud_counter == 1 - 1 && ~d) begin
        start <= 1;
    end
end
    
endmodule
