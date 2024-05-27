module ysyx_23060286_Resultmux (
    input [31:0] aluresult,
    input [31:0] readdata,
    input [31:0] snpc,
    input [1:0] resultsrc,
    output [31:0] result
);
     assign result=(resultsrc[1] ? snpc:(resultsrc[0] ? readdata:aluresult));
endmodule
