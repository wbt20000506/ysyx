module ysyx_23060286_Alu(
  input [31:0] srca,
  input [31:0] srcb,
  input [3:0] alucontrol,
  input [2:0] f3,
  output zero,
  output reg [31:0] aluresult
);
  assign zero = (aluresult == 32'd0 & f3==3'b000) |(aluresult != 32'd0 & f3==3'b001)|($signed(srca) >= $signed(srcb) & f3==3'b101)|(srca<srcb & f3==3'b110)|(($signed(srca) < $signed(srcb) & f3==3'b100))|(srca>=srcb & f3==3'b111);
  always @(*) begin
    case (alucontrol)
      4'b0000:aluresult=srca+srcb;
      4'b0001:aluresult=srca-srcb;
      4'b0010:aluresult=srca&srcb;
      4'b0011:aluresult=srca|srcb;
      4'b0100:aluresult=$signed(srca)>>>srcb[4:0]; //srai
      4'b0101:aluresult=($signed(srca)<$signed(srcb) ? 32'd1:32'd0);
      4'b0110:aluresult=srca>>srcb[4:0]; //srli
      4'b0111:aluresult=srca<<srcb[4:0];
      4'b1000:aluresult=srca^srcb;
      4'b1001:aluresult=srcb;
      default: aluresult={{32{1'b1}}};
    endcase
      //$display("control:%b,src1:%x,src2:%x,rd:%x",alucontrol, srca,srcb,aluresult);

  end
endmodule
