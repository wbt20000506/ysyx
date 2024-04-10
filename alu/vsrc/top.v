module top (
    input [3:0] a,
    input [3:0] b,
    input [2:0] sleact,
    output reg [3:0] sum,
    output reg cin,
    output reg overflow,
    output reg out
);

    // 中间变量
    wire [3:0] sum_add, sum_sub, sum_x, sum_and, sum_or, sum_xor, sum_batter, sum_zero;
    wire cin_add, overflow_add, cin_sub, overflow_sub;
    wire out_batter, out_zero;

    // 实例化各个操作的模块
    add add_inst(.a(a), .b(b), .sum(sum_add), .cin(cin_add), .overflow(overflow_add));
    sub sub_inst(.a(a), .b(b), .sum(sum_sub), .cin(cin_sub), .overflow(overflow_sub));
    x x_inst(.a(a), .sum(sum_x));
    and1 and_inst(.a(a), .b(b), .sum(sum_and));
    or1 or_inst(.a(a), .b(b), .sum(sum_or));
    xor1 xor_inst(.a(a), .b(b), .sum(sum_xor));
    batter batter_inst(.a(a), .b(b), .sum(sum_batter), .out(out_batter));
    zero zero_inst(.a(a), .b(b), .sum(sum_zero), .out(out_zero));

    // 根据 sleact 的值选择相应模块的输出
    always @(*) begin
        sum = 4'b0000;
        cin = 1'b0;
        overflow = 1'b0;
        out = 1'b0;
        case (sleact)
            3'd0: begin
                sum = sum_add;
                cin = cin_add;
                overflow = overflow_add;
            end
            3'd1: begin
                sum = sum_sub;
                cin = cin_sub;
                overflow = overflow_sub;
            end
            3'd2: sum = sum_x;
            3'd3: sum = sum_and;
            3'd4: sum = sum_or;
            3'd5: sum = sum_xor;
            3'd6: out = out_batter;
            3'd7: out = out_zero;
            default: sum = 4'b0000; // 默认情况
        endcase
    end
endmodule


module add (
    input [3:0] a,
    input [3:0] b,
    output [3:0] sum,
    output cin,
    output overflow
);
    assign {cin,sum}=a+b;
    assign overflow=~(a[3]^b[3])&(sum[3]^a[3]);
endmodule

module sub (
    input [3:0] a,
    input [3:0] b,
    output [3:0] sum,
    output cin,
    output overflow
);
    wire [3:0] temp;
    assign temp=~b+1'b1;
    assign {cin,sum}=a+temp;
    assign overflow=~(a[3]^temp[3])&(sum[3]^a[3]);
endmodule

module x (
    input [3:0] a,
    output [3:0] sum
);
    assign sum = ~a;
endmodule

module and1 (
    input [3:0] a,
    input [3:0] b,
    output [3:0] sum
);
    assign sum = a&b;
endmodule

module or1 (
    input [3:0] a,
    input [3:0] b,
    output [3:0] sum
);
    assign sum = a|b;
endmodule

module xor1 (
    input [3:0] a,
    input [3:0] b,
    output [3:0] sum
);
    assign sum = a^b;
endmodule

module batter (
    input [3:0] a,
    input [3:0] b,
    output [3:0] sum,
    output out 
);
    wire n1,m1;
    sub sub1(.a(a),.b(b),.sum(sum),.cin(n1),.overflow(m1));
    assign out=sum[3]^m1;
endmodule

module zero (
    input [3:0] a,
    input [3:0] b,
    output [3:0] sum,
    output out 
);
    wire n1,m1;
    sub sub1(.a(a),.b(b),.sum(sum),.cin(n1),.overflow(m1));
    assign out=~(|sum);
endmodule

