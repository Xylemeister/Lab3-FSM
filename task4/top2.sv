module  top2(
    input logic clk,
    input logic rst,
    input logic trigger,
    input logic N,
    output logic cmd_seq,
    output logic cmd_delay,
    output [7:0] data_out
);

logic en;

top1 myg(
    .clk(clk),
    .rst(rst),
    .cmd_seq(cmd_seq),
    .cmd_delay(cmd_delay),
    .N(N),
    .data_out(en)
);

f1fsm myfsm(
    .clk(clk),
    .rst(rst),
    .en(en),
    .trigger(trigger),
    .cmd_delay(cmd_delay),
    .cmd_seq(cmd_seq),
    .out(data_out)
);
endmodule
