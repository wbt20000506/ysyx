module top (
  input [7:0] x,
  input en,
  output reg [2:0] y,
  output reg [7:0] h,
  output reg n
);

always @(*) begin
    if (en) begin
        n = 1;
        y = 3'b0;
        casez (x)
            8'b1???????: y = 3'd7;
            8'b01??????: y = 3'd6;
            8'b001?????: y = 3'd5;
            8'b0001????: y = 3'd4;
            8'b00001???: y = 3'd3;
            8'b000001??: y = 3'd2;
            8'b0000001?: y = 3'd1;
            8'b00000001: y = 3'd0;  
            default: n = 0;
        endcase
        casez (y)
            3'd0:h = ~8'b11111101;
            3'd1:h = ~8'b01100000;
            3'd2:h = ~8'b11011010;
            3'd3:h = ~8'b11110010;
            3'd4:h = ~8'b01100110;
            3'd5:h = ~8'b10110110;
            3'd6:h = ~8'b10111110;
            3'd7:h = ~8'b11100000; 
            default: n = 0;
        endcase
        
    end else begin
        y = 3'b0;
        n = 0;
    end
    
end

endmodule
