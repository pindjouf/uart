`timescale 1ns/1ps

module baudTest;

reg clk;
reg reset;
wire baud;

    baudUnit dut (
        .clk(clk),
        .reset(reset),
        .baud(baud)
    );

always #5 clk = ~clk; // Toggle clock every 5ns, so clock cycle = 10ns

initial begin
    // Initial setup
    clk = 0;
    reset = 1;

    $dumpfile("baudDump.vcd");
    $dumpvars(0, baudTest);

    $display("Header:");
    $display("time=%0tps | baud=%0h", $time, baud);
    $display("---");
    $display("");

    // Start the simi
    #100 reset = 0;

    $display("Start of the simulation");
    $display("---");
    #10;
    repeat (100000) begin
        #10;
        $display("time=%0tps | baud=%0h", $time, baud);
    end

    #10 reset = 1;

    // Finish sim 50ns later
    #50 $finish;
end

endmodule
