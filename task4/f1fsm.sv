module f1fsm(
    input logic clk,
    input logic rst,
    input logic en,
    input logic trigger,
    output logic [7:0] out,
    output logic cmd_seq,
    output logic cmd_delay
);
// define states
typedef enum {S,S0, S1, S2, S3, S4, S5, S6, S7, S8} state;
state current, next;

always_ff @(posedge clk)begin
    if(rst) current <= S0;
    
    end
// state logic
always_comb begin
    case(current)
        S0:  next = S1;
        S1:  next = S2;
        S2:  next = S3;
        S3:  next = S4;
        S4:  next = S5;
        S5:  next = S6;
        S6:  next = S7;
        S7:  next = S8;
        S8:  next = S;

    endcase
end
// output logic
always_comb begin
    case(current)
        S0: out = 8'b0;
        S1: out = 8'b1;
        S2: out = 8'b11;
        S3: out = 8'b111;
        S4: out = 8'b1111;
        S5: out = 8'b11111;
        S6: out = 8'b111111;
        S7: out = 8'b1111111;
        S8: out = 8'b11111111;
    endcase
end

always_comb begin
    if (current != S8)begin
        cmd_delay = 0;
        cmd_seq = 1;
    end
    else begin
        cmd_delay = 1;
        cmd_seq = 0;
    end
end



endmodule
