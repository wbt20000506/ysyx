module ysyx_23060286_RegisterFile(
  input clk,
  input [31:0] rddata,
  input [4:0] waddr,
  input [4:0] r1addr,
  input [4:0] r2addr,
  input wen,
  output [31:0] rs1data,
  output [31:0] rs2data
);
    reg [31:0] rf [31:0];
    assign rs1data=rf[r1addr];
    assign rs2data=rf[r2addr];
    always @(posedge clk) begin
        if (wen) rf[waddr] <= rddata;
        rf[0]<=32'd0;
    end
endmodule
