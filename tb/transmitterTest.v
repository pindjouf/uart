`timescale 1ns/1ps

module transmitterTest;

parameter WIDTH = 8;

// Testbench signals
reg clk;
reg reset;
wire baud;
wire tx;
reg [WIDTH-1:0] data;
wire [3:0] bit_count;
reg start;

// Instantiate the transmitter module
transmitter dut (
    .clk(clk),
    .reset(reset),
    .baud(baud),
    .data(data),
    .bit_count(bit_count),
    .tx(tx),
    .start(start)
);

// Clock generation
always #5 clk = ~clk;  // clock period = 10ns

initial begin
    // Simulation setup
    clk = 0;
    data = 8'b0;
    start = 0;
    reset = 0;

    $dumpfile("txDump.vcd");
    $dumpvars(0, transmitterTest);

    // Test header
    $display("Time | Data (Input) | TX (Output) | Bit Count");
    $display("-------------------------------------------------------------");

    // Test case: Transmitting "Hello, World!" (in ASCII bytes)
    send_uart_byte(8'h48); // 'H'
    send_uart_byte(8'h65); // 'e'
    send_uart_byte(8'h6C); // 'l'
    send_uart_byte(8'h6C); // 'l'
    send_uart_byte(8'h6F); // 'o'
    send_uart_byte(8'h2C); // ','
    send_uart_byte(8'h20); // ' ' (space)
    send_uart_byte(8'h57); // 'W'
    send_uart_byte(8'h6F); // 'o'
    send_uart_byte(8'h72); // 'r'
    send_uart_byte(8'h6C); // 'l'
    send_uart_byte(8'h64); // 'd'
    send_uart_byte(8'h21); // '!'

    // Final reset before ending the simulation
    reset_sequence();

    #100000 $finish;
end

// Task to send a UART byte
task send_uart_byte(input [7:0] byte_data);
    begin
        // Apply the byte to the data input and assert start
        #10 data = byte_data;   // Set the data byte
        start = 1;              // Start transmission
        $display("Sending Data: 0x%h (%c)", byte_data, byte_data);
        repeat (10) begin
            #17355;  // Wait for the transmission period
            $display("%0tps | 0x%h | %b | %d", $time, data, tx, bit_count);
        end
        start = 0;              // Deassert start after transmission
    end
endtask

// Task to handle reset
task reset_sequence;
    begin
        reset = 1;
        start = 0;
        #5 reset = 0;
    end
endtask

endmodule
