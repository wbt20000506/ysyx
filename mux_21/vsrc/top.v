module top(
    input a,
    input b,
    input s,        
    output f
);
	assign f=(~s&a)|(s&b);
endmodule
