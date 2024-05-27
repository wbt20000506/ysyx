module ysyx_23060286_Idu (
    input [6:0] op,
    input [2:0] f3,
    input f7,
    input zero,
    output jalr,
    output reg pcsrc,
    output reg [1:0] resultsrc,
    output reg memwrite,
    output reg [2:0] alucontrol,
    output reg alusrc,
    output reg [1:0] immsrc,
    output reg regwrite,
    output reg auipc
);
    reg branch;
    reg [1:0] aluop;
    reg jump;
    assign jalr=(immsrc==2'b00)&jump;
    assign pcsrc=(zero&branch)|jump;
    import "DPI-C"  function void npc_error;   
  always @(*) begin
    /* verilator lint_off CASEINCOMPLETE */
    case (op)
        7'd3:begin regwrite=1;immsrc=2'b00;alusrc=1;memwrite=0;resultsrc=2'b01;branch=0;aluop=2'b00;jump=0;auipc=0; end //lw
        7'd35:begin regwrite=0;immsrc=2'b01;alusrc=1;memwrite=1;resultsrc=2'b01;branch=0;aluop=2'b00;jump=0; auipc=0;end //sw
        7'd51:begin regwrite=1;immsrc=2'b00;alusrc=0;memwrite=0;resultsrc=2'b00;branch=0;aluop=2'b10;jump=0; auipc=0;end //R-type
        7'd99:begin regwrite=0;immsrc=2'b10;alusrc=0;memwrite=0;resultsrc=2'b01;branch=1;aluop=2'b01;jump=0; auipc=0;end //beq
        7'd19:begin regwrite=1;immsrc=2'b00;alusrc=1;memwrite=0;resultsrc=2'b00;branch=0;aluop=2'b10;jump=0; auipc=0;end //I-type
        7'd111:begin regwrite=1;immsrc=2'b11;alusrc=1;memwrite=0;resultsrc=2'b10;branch=0;aluop=2'b00;jump=1; auipc=0;end //jal
        7'd103:begin regwrite=1;immsrc=2'b00;alusrc=1;memwrite=0;resultsrc=2'b10;branch=0;aluop=2'b00;jump=1; auipc=0;end //jalr
        7'd23:begin regwrite=1;immsrc=2'b00;alusrc=1;memwrite=0;resultsrc=2'b00;branch=0;aluop=2'b11;jump=0; auipc=1;end //auipc
        default:begin npc_error(); regwrite=1;immsrc=2'b00;alusrc=1;memwrite=0;resultsrc=2'b10;branch=0;aluop=2'b00;jump=1;auipc=1;end //error
    endcase
    /* verilator lint_off CASEINCOMPLETE */
  end 

  always @(*) begin
    /* verilator lint_off CASEINCOMPLETE */
    case (aluop)
        2'b00:alucontrol=3'b000; //lw,sw
        2'b01:alucontrol=3'b001;    //beq
        2'b10:begin
            /* verilator lint_off CASEINCOMPLETE */
            case (f3)
                3'b111:alucontrol=3'b010;   //and
                3'b110:alucontrol=3'b011;   //or
                3'b010:alucontrol=3'b101;   //slt
                3'b000:begin 
                        if ({op[5],f7}==2'b11)
                            alucontrol=3'b001;  //sub
                        else
                            alucontrol=3'b000;  //add
                    end
            endcase
            /* verilator lint_off CASEINCOMPLETE */
        end
        2'b11:alucontrol=3'b100; //auipc
    endcase
    /* verilator lint_off CASEINCOMPLETE */

  end
    
    import "DPI-C"  function void npc_trap;   
    always @(*) begin
        if(op==7'b1110011)
            npc_trap();
    end
endmodule
