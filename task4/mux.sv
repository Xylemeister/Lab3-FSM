module mux (
    input logic S1,
    input logic S0,
    input logic s,
    output logic data
);

assign data = s ? S1: S0;


endmodule
