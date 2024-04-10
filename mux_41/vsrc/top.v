module top(x1,x2,x3,x4,y,f);
  input   [1:0] x1,x2,x3,x4,y;
  output  [1:0] f;
  MuxKey #(4, 2, 2) i0 (f, y, {
    2'b00, x1,
    2'b01, x2,
    2'b10, x3,
    2'b11, x4
  });
endmodule
