module Idu (
    /* verilator lint_off UNUSED */
    input [6:0] op,
    /* verilator lint_off UNUSED */
    input [2:0] f3,
    /* verilator lint_off UNUSED */
    input [6:0] f7,
    input [11:0] f12,
    /* verilator lint_off UNUSED */
    output [2:0] alucotrol,
    output [2:0] immtype,
    output regwrite 
);
    import "DPI-C"  function void npc_trap;
    assign alucotrol=f3;
    assign regwrite=1;
    assign immtype=3'b000;
    always @(*) begin
        if(op==7'b1110011 && f12== 12'h001)begin
            npc_trap();
        end        
    end

endmodule
