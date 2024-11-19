`timescale 1ns/1ps

module transmitterTest;
    reg clk;
    reg rstn;
    reg [7:0] bus;
    wire baud;
    wire tx;

    transmitter dut (
        .clk(clk),
        .rstn(rstn),
        .bus(bus),
        .baud(baud),
        .tx(tx)
    );

    always #10 clk = ~clk; // 50 MHz system clock

    task send_byte(input [7:0] data);
        begin
            bus = data;
            #347240; // Wait for ~10 bits at 115200 baud rate (10 bits × ~8681 ns per bit)
            $display("Transferred byte: 0x%h, Bus value: %b", data, bus);

        end
    endtask

    initial begin
        $dumpfile("txDump.vcd");
        $dumpvars(0, transmitterTest);

        // init
        clk = 0;
        rstn = 0;
        bus = 8'b0;

        // start shit up
        #17350 rstn = 1;

        // "Hello, World!" in ASCII
        send_byte(8'h48); // H
        send_byte(8'h65); // e
        send_byte(8'h6C); // l
        send_byte(8'h6C); // l
        send_byte(8'h6F); // o
        send_byte(8'h2C); // ,
        send_byte(8'h20); // (space)
        send_byte(8'h57); // W
        send_byte(8'h6F); // o
        send_byte(8'h72); // r
        send_byte(8'h6C); // l
        send_byte(8'h64); // d
        send_byte(8'h21); // !

        #500000;
        $finish;
    end
endmodule
