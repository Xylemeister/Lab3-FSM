module top #(
    parameter WIDTH = 8
)(
    input logic clk,
    input logic en,
    input logic rst,
    input logic [15:0] N,
    output logic [WIDTH-1:0] out
);

logic n1;

clktick mytick(
    .clk(clk),
    .rst(rst),
    .en(en),
    .N(N),
    .tick(n1)
);

f1fsm myf1(
    .clk(clk),
    .rst(rst),
    .en(n1),
    .out(out)
);

endmodule
