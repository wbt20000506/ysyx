module ysyx_23060286_Alu(
    input [31:0] rs1,
    input [31:0] rs2,
    input [31:0] imm,
    input [31:0] pc,
    input [5:0] alucontrol,
    output [31:0] result,
    output jump,
    output branch,
    output zero
);

    wire [31:0] add, sub, sll, slt, sltu, xor_, srl, sra, or_, and_;
    wire [31:0] addi, slti, sltiu, xori, ori, andi, slli, srli, srai;
    wire [31:0] lui, auipc, jal, jalr;

    // Operation assignments
    assign add = rs1 + rs2;
    assign sub = rs1 - rs2;
    assign sll = rs1 << rs2[4:0];
    assign slt = ($signed(rs1) < $signed(rs2)) ? 32'd1 : 32'd0;
    assign sltu = (rs1 < rs2) ? 32'd1 : 32'd0;
    assign xor_ = rs1 ^ rs2;
    assign srl = rs1 >> rs2[4:0];
    assign sra = $signed(rs1) >>> rs2[4:0];
    assign or_ = rs1 | rs2;
    assign and_ = rs1 & rs2;
    assign addi = rs1 + imm;
    assign slti = ($signed(rs1) < $signed(imm)) ? 32'd1 : 32'd0;
    assign sltiu = (rs1 < imm) ? 32'd1 : 32'd0;
    assign xori = rs1 ^ imm;
    assign ori = rs1 | imm;
    assign andi = rs1 & imm;
    assign slli = rs1 << imm[4:0];
    assign srli = rs1 >> imm[4:0];
    assign srai = $signed(rs1) >>> imm[4:0];
    assign lui = imm << 12;
    assign auipc = pc + (imm << 12);
    assign jal = pc + 4;
    assign jalr = (rs1 + imm) & ~1;

    // Jump, Branch, and Zero logic without always block
    assign jump = (alucontrol == 6'd2 || alucontrol == 6'd3); // jal, jalr
    assign branch = ((alucontrol >= 6'd4 && alucontrol <= 6'd9)||alucontrol == 6'd3); // beq, bne, blt, bge, bltu, bgeu
    assign zero = (branch && ((alucontrol == 6'd4 && rs1 == rs2) ||  // beq
                            (alucontrol == 6'd5 && rs1 != rs2) || // bne
                            (alucontrol == 6'd6 && $signed(rs1) < $signed(rs2)) ||  // blt
                            (alucontrol == 6'd7 && $signed(rs1) >= $signed(rs2)) || // bge
                            (alucontrol == 6'd8 && rs1 < rs2) ||  // bltu
                            (alucontrol == 6'd9 && rs1 >= rs2))); // bgeu

    ysyx_23060286_MuxKeyInternal #(
        .NR_KEY(23),
        .KEY_LEN(6),
        .DATA_LEN(32),
        .HAS_DEFAULT(1)
    ) alu_mux (
        .out(result),
        .key(alucontrol),
        .default_out(32'd0),
        .lut({
            {6'd0, lui},
            {6'd1, auipc},
            {6'd2, jal},
            {6'd3, jalr},
            {6'd4, add},
            {6'd5, sub},
            {6'd6, sll},
            {6'd7, slt},
            {6'd8, sltu},
            {6'd9, xor_},
            {6'd10, srl},
            {6'd11, sra},
            {6'd12, or_},
            {6'd13, and_},
            {6'd14, addi},
            {6'd15, slti},
            {6'd16, sltiu},
            {6'd17, xori},
            {6'd18, ori},
            {6'd19, andi},
            {6'd20, slli},
            {6'd21, srli},
            {6'd22, srai}
        })
    );

endmodule
