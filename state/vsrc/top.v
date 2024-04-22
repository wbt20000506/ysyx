module top (
    input ps2_data,
    input clk,
    input ps2_clk,
    input reset,
    output reg [9:0] buffer,
    output reg [7:0] seg0,
    output reg [7:0] seg1,
    output reg [7:0] seg2,
    output reg [7:0] seg3,
    output reg [7:0] seg7,
    output reg [7:0] seg6
);
    reg [3:0] count;  // count ps2_data bits
    reg [2:0] ps2_clk_sync;
    reg [1:0] data=2'b10;
    reg [7:0] ascii_code;
    reg [3:0] a=4'b0;
    reg [3:0] b=4'b0;
    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (reset == 0) begin // reset
            count <= 0;
        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit
                    (ps2_data)       &&  // stop bit
                    (^buffer[9:1])) begin      // odd  parity
                    $display("receive %x", buffer[8:1]);
                    $display("data %d", data);
                    $display("a %d", a);
                    $display("b %d", b);
                    if(buffer[8:1]==8'b11110000)begin
                        data<={data[0],1'b1};
                        a<=a+1;
                        if(a==9)begin
                            a<=0;
                            b<=b+1;
                        end
                        if(a==9&&b==9)begin
                            a<=0;
                            b<=0;
                        end
                    end else begin
                        data<={data[0],1'b0};
                    end
                end
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end

    always@(*)begin
        seg0 = 8'b11111111;
        if(data!=2)begin
        case (buffer[4:1])
            4'd0: seg0 = ~8'b11111101; // 0
            4'd1: seg0 = ~8'b01100000; // 1
            4'd2: seg0 = ~8'b11011010; // 2
            4'd3: seg0 = ~8'b11110010; // 3
            4'd4: seg0 = ~8'b01100110; // 4
            4'd5: seg0 = ~8'b10110110; // 5
            4'd6: seg0 = ~8'b10111110; // 6
            4'd7: seg0 = ~8'b11100000; // 7
            4'd8: seg0 = ~8'b11111110; // 8
            4'd9: seg0 = ~8'b11110110; // 9
            4'd10: seg0 = ~8'b11101110; // A
            4'd11: seg0 = ~8'b00111110; // b
            4'd12: seg0 = ~8'b10011100; // C
            4'd13: seg0 = ~8'b01111010; // d
            4'd14: seg0 = ~8'b10011110; // E
            4'd15: seg0 = ~8'b10001110; // F
        default: seg0 = 8'b00000000; // Off or undefined
        endcase
        end
    end

    always@(*)begin
            seg1=8'b11111111;
            if(data!=2)begin
            case (buffer[8:5])
                4'd0: seg1 = ~8'b11111101; // 0
                4'd1: seg1 = ~8'b01100000; // 1
                4'd2: seg1 = ~8'b11011010; // 2
                4'd3: seg1 = ~8'b11110010; // 3
                4'd4: seg1 = ~8'b01100110; // 4
                4'd5: seg1 = ~8'b10110110; // 5
                4'd6: seg1 = ~8'b10111110; // 6
                4'd7: seg1 = ~8'b11100000; // 7
                4'd8: seg1 = ~8'b11111110; // 8
                4'd9: seg1 = ~8'b11110110; // 9
                4'd10: seg1 = ~8'b11101110; // A
                4'd11: seg1 = ~8'b00111110; // b
                4'd12: seg1 = ~8'b10011100; // C
                4'd13: seg1 = ~8'b01111010; // d
                4'd14: seg1 = ~8'b10011110; // E
                4'd15: seg1 = ~8'b10001110; // F
            default: seg1 = 8'b00000000; // Off or undefined
            endcase
            end
        end
    
    always @(*) begin
    case(buffer[8:1])
        // 字母
        8'h1C: ascii_code = 8'h61; // 'a'
        8'h32: ascii_code = 8'h62; // 'b'
        8'h21: ascii_code = 8'h63; // 'c'
        8'h23: ascii_code = 8'h64; // 'd'
        8'h24: ascii_code = 8'h65; // 'e'
        8'h2B: ascii_code = 8'h66; // 'f'
        8'h34: ascii_code = 8'h67; // 'g'
        8'h33: ascii_code = 8'h68; // 'h'
        8'h43: ascii_code = 8'h69; // 'i'
        8'h3B: ascii_code = 8'h6A; // 'j'
        8'h42: ascii_code = 8'h6B; // 'k'
        8'h4B: ascii_code = 8'h6C; // 'l'
        8'h3A: ascii_code = 8'h6D; // 'm'
        8'h31: ascii_code = 8'h6E; // 'n'
        8'h44: ascii_code = 8'h6F; // 'o'
        8'h4D: ascii_code = 8'h70; // 'p'
        8'h15: ascii_code = 8'h71; // 'q'
        8'h2D: ascii_code = 8'h72; // 'r'
        8'h1B: ascii_code = 8'h73; // 's'
        8'h2C: ascii_code = 8'h74; // 't'
        8'h3C: ascii_code = 8'h75; // 'u'
        8'h2A: ascii_code = 8'h76; // 'v'
        8'h1D: ascii_code = 8'h77; // 'w'
        8'h22: ascii_code = 8'h78; // 'x'
        8'h35: ascii_code = 8'h79; // 'y'
        8'h1A: ascii_code = 8'h7A; // 'z'

        // 数字
        8'h45: ascii_code = 8'h30; // '0'
        8'h16: ascii_code = 8'h31; // '1'
        8'h1E: ascii_code = 8'h32; // '2'
        8'h26: ascii_code = 8'h33; // '3'
        8'h25: ascii_code = 8'h34; // '4'
        8'h2E: ascii_code = 8'h35; // '5'
        8'h36: ascii_code = 8'h36; // '6'
        8'h3D: ascii_code = 8'h37; // '7'
        8'h3E: ascii_code = 8'h38; // '8'
        8'h46: ascii_code = 8'h39; // '9'

        default: ascii_code = 8'h20; // 默认为空格
    endcase
end

    always@(*)begin
        seg2 = 8'b11111111;
        if(data!=2)begin
        case (ascii_code[3:0])
            4'd0: seg2 = ~8'b11111101; // 0
            4'd1: seg2 = ~8'b01100000; // 1
            4'd2: seg2 = ~8'b11011010; // 2
            4'd3: seg2 = ~8'b11110010; // 3
            4'd4: seg2 = ~8'b01100110; // 4
            4'd5: seg2 = ~8'b10110110; // 5
            4'd6: seg2 = ~8'b10111110; // 6
            4'd7: seg2 = ~8'b11100000; // 7
            4'd8: seg2 = ~8'b11111110; // 8
            4'd9: seg2 = ~8'b11110110; // 9
            4'd10: seg2 = ~8'b11101110; // A
            4'd11: seg2 = ~8'b00111110; // b
            4'd12: seg2 = ~8'b10011100; // C
            4'd13: seg2 = ~8'b01111010; // d
            4'd14: seg2 = ~8'b10011110; // E
            4'd15: seg2 = ~8'b10001110; // F
        default: seg2 = 8'b00000000; // Off or undefined
        endcase
        end
    end

    always@(*)begin
            seg3=8'b11111111;
            if(data!=2)begin
            case (ascii_code[7:4])
                4'd0: seg3 = ~8'b11111101; // 0
                4'd1: seg3 = ~8'b01100000; // 1
                4'd2: seg3 = ~8'b11011010; // 2
                4'd3: seg3 = ~8'b11110010; // 3
                4'd4: seg3 = ~8'b01100110; // 4
                4'd5: seg3 = ~8'b10110110; // 5
                4'd6: seg3 = ~8'b10111110; // 6
                4'd7: seg3 = ~8'b11100000; // 7
                4'd8: seg3 = ~8'b11111110; // 8
                4'd9: seg3 = ~8'b11110110; // 9
                4'd10: seg3 = ~8'b11101110; // A
                4'd11: seg3 = ~8'b00111110; // b
                4'd12: seg3 = ~8'b10011100; // C
                4'd13: seg3 = ~8'b01111010; // d
                4'd14: seg3 = ~8'b10011110; // E
                4'd15: seg3 = ~8'b10001110; // F
            default: seg3 = 8'b00000000; // Off or undefined
            endcase
            end
        end



    always@(*)begin
        case (a[3:0])
            4'd0: seg6 = ~8'b11111101; // 0
            4'd1: seg6 = ~8'b01100000; // 1
            4'd2: seg6 = ~8'b11011010; // 2
            4'd3: seg6 = ~8'b11110010; // 3
            4'd4: seg6 = ~8'b01100110; // 4
            4'd5: seg6 = ~8'b10110110; // 5
            4'd6: seg6 = ~8'b10111110; // 6
            4'd7: seg6 = ~8'b11100000; // 7
            4'd8: seg6 = ~8'b11111110; // 8
            4'd9: seg6 = ~8'b11110110; // 9
            4'd10: seg6 = ~8'b11101110; // A
            4'd11: seg6 = ~8'b00111110; // b
            4'd12: seg6 = ~8'b10011100; // C
            4'd13: seg6 = ~8'b01111010; // d
            4'd14: seg6 = ~8'b10011110; // E
            4'd15: seg6 = ~8'b10001110; // F
        default: seg6 = 8'b00000000; // Off or undefined
        endcase
    end

    always@(*)begin
            case (b[3:0])
                4'd0: seg7 = ~8'b11111101; // 0
                4'd1: seg7 = ~8'b01100000; // 1
                4'd2: seg7 = ~8'b11011010; // 2
                4'd3: seg7 = ~8'b11110010; // 3
                4'd4: seg7 = ~8'b01100110; // 4
                4'd5: seg7 = ~8'b10110110; // 5
                4'd6: seg7 = ~8'b10111110; // 6
                4'd7: seg7 = ~8'b11100000; // 7
                4'd8: seg7 = ~8'b11111110; // 8
                4'd9: seg7 = ~8'b11110110; // 9
                4'd10: seg7 = ~8'b11101110; // A
                4'd11: seg7 = ~8'b00111110; // b
                4'd12: seg7 = ~8'b10011100; // C
                4'd13: seg7 = ~8'b01111010; // d
                4'd14: seg7 = ~8'b10011110; // E
                4'd15: seg7 = ~8'b10001110; // F
            default: seg7 = 8'b00000000; // Off or undefined
            endcase
        end
endmodule

