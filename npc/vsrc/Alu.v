module Alu(
    input [31:0] a,
    input [31:0] b,
    input [2:0] alucontrol,
    output [31:0] result,
    output of,
    output zf,
    output nf,
    output cf
);
    wire [31:0] raddsub;
    wire [31:0] r_and;
    wire [31:0] ror;
    wire [31:0] b2;

    // 根据 alucontrol[0] 的值决定是加法还是减法
    assign b2 = b ^ {32{alucontrol[0]}};
    // 执行加减法，cf 输出进位，raddsub 为结果
    assign {cf, raddsub} = a + b2 + {31'b0, alucontrol[0]};
    // 计算溢出标志
    assign of = (~(a[31] ^ b2[31])) & (a[31] ^ raddsub[31]);
    // 按位与
    assign r_and = a & b;
    // 按位或
    assign ror = a | b;

    // 根据 alucontrol 的值选择操作
    MuxKeyInternal #(4, 3, 32,0) aluxmux(result, alucontrol, {32{1'b0}},{
        3'b000, raddsub,
        3'b001, raddsub,
        3'b010, r_and,
        3'b011, ror
    });

    // 零标志，当结果为0时 zf 为 1
    assign zf = ~( |result );
    // 负标志，当结果最高位为1时 nf 为 1
    assign nf = result[31];

endmodule
