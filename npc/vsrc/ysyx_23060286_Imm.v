module ysyx_23060286_Imm (
    input [31:7] imm,
    input auipc,
    input [1:0] immsrc,
    output reg [31:0] immext  
);
    always @(*) begin
        case ({immsrc,auipc})
            3'b000: immext = {{20{imm[31]}}, imm[31:20]}; // I-type
            3'b010: immext = {{20{imm[31]}}, imm[31:25], imm[11:7]}; // S-type
            3'b100: immext = {{19{imm[31]}}, imm[31], imm[7], imm[30:25], imm[11:8], 1'b0}; // B-type
            3'b110: immext = {{12{imm[31]}}, imm[19:12], imm[20], imm[30:21], 1'b0}; // J-type
            3'b001: immext = {{imm[31:12]},{12{1'b0}}}; // U-type
            default: immext = {32{1'b1}};
        endcase
    end
endmodule


