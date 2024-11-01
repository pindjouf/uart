`timescale 1ns/1ps

module receiverTest;

parameter WIDTH = 8;

reg clk;
reg data;
wire sample;
reg baud;
reg reset;
reg hold_value;
reg [WIDTH-1:0] rx;

    receiver dut (
        .data(data),
        .hold_value(hold_value),
        .baud(baud),
        .reset(reset),
        .clk(clk),
        .sample(sample),
        .rx(rx)
    );

    baudUnit baudGen (
        .clk(clk),
        .reset(reset),
        .baud(baud),
        .sample(sample)
    );

    always #5 clk = ~clk;
    always if (reset) begin data = 1'b0; end

    initial begin
        data = 1;
        clk = 0;
        $dumpfile("rxDump.vcd");
        $dumpvars;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        #8675 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        #8675 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        #8675 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        #8675 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        #8675 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        #8675 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        #8675 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        #8675 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        #8675 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        // #8675 hold_value = 1;
        #8675 reset = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        // hold_value = 1;
        #8675 reset = 0;
        #99999;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", rx[7], rx[6], rx[5], rx[4], rx[3], rx[2], rx[1], rx[0]);
        $display("---");
        $finish;
    end
endmodule
