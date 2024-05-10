module Snpc (
    input [31:0] pc,
    output [31:0] snpc
);
    assign snpc=pc+32'd4;
endmodule
