`timescale 1ns/1ps

module sipoTest;

parameter WIDTH = 8;

reg clk;
reg data;
reg reset;
reg [WIDTH-1:0] q;

    sipoUnit dut (
        .data_in(data),
        .reset(reset),
        .clk(clk),
        .q(q)
    );

    always #5 clk = ~clk;
    always if (reset) begin data = 1'b0; end

    initial begin
        data = 0;
        clk = 0;
        $dumpfile("sipoDump.vcd");
        $dumpvars;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #5 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #5 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #5 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #5 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #5 data = 1;
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        $display("time=%0tps", $time);
        #5 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #5 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #5 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #5;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        reset = 1;
        #5;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");

        $finish;
    end
endmodule
