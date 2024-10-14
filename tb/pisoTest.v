`timescale 1ns/1ps

module pisoTest;

parameter WIDTH = 8;

reg clk;
reg [WIDTH-1:0] data;
reg clear;
wire q;

pisoUnit dut (
    .data(data),
    .reset(clear),
    .clk(clk),
    .q(q)
);

always #5 clk = ~clk; // Toggle clock every 5ns, so clock cycle = 10ns

initial begin
    // Initial setup
    clk = 0;
    clear = 1;
    data = 8'b0;

    $dumpfile("pisoDump.vcd");
    $dumpvars(0, pisoTest);

    $display("Header:");
    $display("time=%0tps | input=%0h | output=%0h", $time, data, q);
    $display("---");
    $display("");

    // Start the simi
    clear = 0;

    // Test case #1
    #5 data = 8'b10011001;

    $display("Data Block #1 -> 10011001");
    $display("---");
    #10;
    repeat (8) begin
        #10;
        $display("time=%0tps | input=0x%0h | output=%0h", $time, data, q);
    end

    #10 clear = 1;

    // Test case #2
    #5 data = 8'b01100001;

    clear = 0;

    $display("");
    $display("Data Block #2 -> 01100001");
    $display("---");
    #10;
    repeat (8) begin
        #10;
        $display("time=%0tps | input=0x%0h | output=%0h", $time, data, q);
    end

    clear = 1;

    // Finish sim 50ns later
    #50 $finish;
end

endmodule
