`timescale 1ns/1ps

module receiverTest;
    reg rx;
    reg clk;
    reg rst;
    wire [7:0] bus;

    receiver dut (
        .rx(rx),
        .clk(clk),
        .rst(rst),
        .bus(bus)
    );

    always #5 clk = ~clk; // 100 MHz clock

    integer byte_count = 0;

    task send_byte(input [7:0] data);
        begin
            byte_count = byte_count + 1;
            rx = 0;
            #8675;

            for (int i = 0; i < 8; i++) begin
                rx = data[i];
                #17355;
            end

            rx = 1;
            #8675;
        end
    endtask: send_byte

    initial begin
        $dumpfile("rxDump.vcd");
        $dumpvars(0, receiverTest);

        clk = 0;
        rst = 0;
        rx = 1;

        #43500 send_byte(8'h48); // H
        #33500 send_byte(8'h49); // I

        #500000;
        $finish;
    end
endmodule
