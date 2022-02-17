module alu  (
    // Data input.
    input  [7:0] X,
    input  [7:0] Y,

    // alu controller
    input op,

    // Data output.
    output [8:0] Result   

);

reg [8:0] temporary;

always @( * ) // while(True) loop
    begin: alu_code
    if (op == 0) begin
        temporary = X + Y;
    end else begin
        temporary = X - Y;
    end
end 

assign Result = temporary;

endmodule
