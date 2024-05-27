module ysyx_23060286_Alu(
  input [31:0] srca,
  input [31:0] srcb,
  input [2:0] alucontrol,
  output zero,
  output reg [31:0] aluresult
);
  assign zero = (aluresult == 32'd0);
  always @(*) begin
    case (alucontrol)
      3'b000:aluresult=srca+srcb;
      3'b001:aluresult=srca-srcb;
      3'b010:aluresult=srca&srcb;
      3'b011:aluresult=srca|srcb;
      3'b100:aluresult=srca+(srcb<<12); //auipc
      3'b101:aluresult=(srca<srcb ? 32'd1:32'd0);
      default: aluresult={{32{1'b1}}};
    endcase
  end
endmodule
