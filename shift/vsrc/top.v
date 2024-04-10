module top (
    input [7:0] in,
    input clk,
    output [7:0] out,
    output [7:0] h
);
    reg a;
    reg [7:0] out_reg;
    reg [7:0] h_reg;
    reg i;

    initial begin
        i = 0;
        out_reg = in; // 初始化 out_reg
    end

    always @(posedge clk) begin
        if ((|out_reg) == 1'b0) begin
            out_reg <= {7'b0, 1'b1};
        end else begin
            if (i == 0) begin
                a = in[4] ^ in[3] ^ in[2] ^ in[0];
                out_reg <= {a, in[7:1]};
                i = 1;
            end else begin
                a = out_reg[4] ^ out_reg[3] ^ out_reg[2] ^ out_reg[0];
                out_reg <= {a, out_reg[7:1]};
            end
        end

        case (out_reg)
            8'd0: h_reg <= ~8'b11111101;
            8'd1: h_reg <= ~8'b01100000;
            8'd2: h_reg <= ~8'b11011010;
            // ... 其他情况 ...
            default: h_reg <= 8'b00000000; // 默认值
        endcase
    end

    assign out = out_reg;
    assign h = h_reg;
endmodule
