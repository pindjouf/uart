`timescale 1ns/1ps

module transmitterTest;

parameter WIDTH = 8;

reg clk;
reg reset;
wire baud;
wire tx;
reg [WIDTH-1:0] data;
wire [3:0] bit_count;
reg start;

transmitter dut (
    .clk(clk),
    .reset(reset),
    .baud(baud),
    .data(data),
    .bit_count(bit_count),
    .tx(tx),
    .start(start)
);

always #5 clk = ~clk;  // clock period = 10ns

initial begin
    // Simulation setup
    clk = 0;
    data = 8'b0;
    start = 0;
    reset = 0;

    $dumpfile("txDump.vcd");
    $dumpvars(0, transmitter_tb);

    // Test header
    $display("Time | Data (Input) | TX (Output) | Bit Count");
    $display("-------------------------------------------------------------");

    // Test case #1: Transmitting 8'b10011001
    #10 data = 8'b10011001;
    #10 start = 1;
    $display("Sending Data Block #1 (10011001)");
    
    repeat (10) begin
        #17355;
        $display("%0tps | 0x%h | %b | %d", $time, data, tx, bit_count);
    end

    // Reset the system
    reset_sequence();

    // Test case #2: Transmitting 8'b01110000
    #10 data = 8'b01110000;
    #20 start = 1;
    $display("Sending Data Block #2 (01110000)");
    
    repeat (10) begin
        #17355;
        $display("%0tps | 0x%h | %b | %d", $time, data, tx, bit_count);
    end

    // Final reset before ending the simulation
    reset_sequence();

    #100000 $finish;
end

// Task to handle reset
task reset_sequence;
    begin
        reset = 1;
        start = 0;
        #5 reset = 0;
    end
endtask

endmodule
