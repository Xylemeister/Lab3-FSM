module top1 (
    input logic clk,
    input logic rst,
    input logic cmd_seq,
    input logic cmd_delay,
    input logic N,
    output logic data_out
);

logic data1, data0;
logic [6:0] data2;


mux mymux(
   .s(cmd_seq),
   .S0(data0),
   .S1(data1),
   .data(data_out)
);

lfsr mylf(
    .clk(clk),
    .rst(rst),
    .data_out(data2)
);

delay #(7) mydelay(
    .clk(clk),
    .rst(rst),
    .trigger(cmd_delay),
    .n(data2),
    .time_out(data0)
);

clktick mytick (
    .rst(rst),
    .clk(clk),
    .en(cmd_seq),
    .N(N),
    .tick(data1)
);










endmodule
