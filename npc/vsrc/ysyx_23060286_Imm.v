module ysyx_23060286_Imm (
    /* verilator lint_off UNUSED */
    input [31:7] inst,
    /* verilator lint_off UNUSED */
    input [2:0] immtype,
    output [31:0] immext
);
    // 定义各种类型的立即数
    wire [31:0] immI = {{20{inst[31]}}, inst[31:20]};
    wire [31:0] immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    wire [31:0] immB = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
    wire [31:0] immU = {inst[31:12], 12'b0};
    wire [31:0] immJ = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};

    ysyx_23060286_MuxKeyInternal #(5, 3, 32, 1) imm_mux(
        .out(immext), 
        .key(immtype), 
        .default_out(32'b0),
        .lut({
            {3'b100, immI},  // I-Type
            {3'b101, immS},  // S-Type
            {3'b011, immB},  // B-Type
            {3'b001, immU},  // U-Type
            {3'b010, immJ}   // J-Type
        })
    );

endmodule

