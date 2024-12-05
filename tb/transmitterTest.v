`timescale 1ns/1ps

module transmitterTest;

reg clk, rst;
reg [7:0] data;
wire tx;

transmitter dut (
    .clk(clk),
    .rst(rst),
    .bus(data),
    .tx(tx)
);

always #5 clk = ~clk;

integer byte_count = 0;

task send_byte(input [7:0] letter);
    begin
        byte_count = byte_count + 1;
        data = letter;
        #260375;
        $display(
            "[Time: %0t ns] Byte #%0d: Binary=%b, Hex=0x%0h, ASCII='%s'", 
            $time, byte_count, letter, letter, (letter >= 32 && letter <= 126) ? letter : 8'h2E
        );
    end
endtask: send_byte

initial begin
    $dumpfile("txDump.vcd");
    $dumpvars(0, transmitterTest);

    rst = 1;
    clk = 0;
    data = 8'b00000000;

    #250000 rst = 0;
    #250000;

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
