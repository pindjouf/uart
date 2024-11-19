`timescale 1ns/1ps

// uncomment to activate DEBUG mode and output the cur_state variable :D
// `define DEBUG

module receiverTest;
    reg clk;
    reg rstn;
    reg rx;
    wire [7:0] bus;
    wire cur_state;

    receiver dut (
        .clk(clk),
        .rstn(rstn),
        .rx(rx),
        .bus(bus)
    );

    always #10 clk = ~clk; // 50 MHz clock

    // simulate some data frames coming in
    task send_byte(input [7:0] data);
        integer i;
        begin
            // start bit
            rx = 0;
            #(8681); // symbol duration time

            // data bits
            for (i = 0; i < 8; i = i + 1) begin
                rx = data[i];
                #(8681);
            end

            // stop bit
            rx = 1;
            #(8681);

            $display("Transferred byte: 0x%h, Bus value: %b", data, bus);
        end
    endtask

    initial begin
        $dumpfile("rxDump.vcd");
        $dumpvars(0, receiverTest);

        clk = 0;
        rstn = 0;
        rx = 1;
        #100 rstn = 1;

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
