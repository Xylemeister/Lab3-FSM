module lfsr (
    input logic clk,
    input logic en,
    input logic rst,
    output logic [4:1] data_out
);

    logic [3:0] sreg;

    always_ff @(posedge clk, posedge rst) 
    if(rst) 
        sreg <= 4'b1;
    else if (en)
        sreg <= {sreg[2:0], sreg[4] ^ sreg[3]};
    assign data_out = sreg;
    
    
endmodule