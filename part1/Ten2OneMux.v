module Ten2OneMux(
    // Inputs    
    input wire [7:0] D0,
    input wire [7:0] D1,
    input wire [7:0] D2,
    input wire [7:0] D3,
    input wire [7:0] D4,
    input wire [7:0] D5,
    input wire [7:0] D6,
    input wire [7:0] D7,
    input wire [7:0] D8,
    input wire [7:0] D9,
    input wire [3:0] select,
    
    // Output
    output reg [7:0] Output       
    ); 


// Input selection according to the selector value
always@( * ) // while(true) loop
    begin
    case(select)
    4'b0000: Output=D0;
    4'b0001: Output=D1;
    4'b0010: Output=D2;
    4'b0011: Output=D3;
    4'b0100: Output=D4;
    4'b0101: Output=D5;
    4'b0110: Output=D6;
    4'b0111: Output=D7;
    4'b1000: Output=D8;
    4'b1001: Output=D9;
    default: Output=8'b00000000;
    endcase    
end
endmodule
