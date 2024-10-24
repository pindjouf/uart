`timescale 1ns/1ps

module sipoTest;

parameter WIDTH = 8;

reg clk;
reg data;
reg baud;
reg reset;
reg hold_value;
reg [WIDTH-1:0] q;

    sipoUnit dut (
        .data_in(data),
        .hold_value(hold_value),
        .baud(baud),
        .reset(reset),
        .clk(clk),
        .q(q)
    );

    baudUnit baudGen (
        .clk(clk),
        .reset(reset),
        .baud(baud)
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
        #8675 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #8675 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #8675 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #8675 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #8675 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #8675 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #8675 data = 0;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #8675 data = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #8675;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        #8675 hold_value = 1;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        reset = 1;
        #8675;
        $display("time=%0tps", $time);
        $display("input=%0h", data);
        $display("output=%0h", q[7], q[6], q[5], q[4], q[3], q[2], q[1], q[0]);
        $display("---");
        $finish;
    end
endmodule
