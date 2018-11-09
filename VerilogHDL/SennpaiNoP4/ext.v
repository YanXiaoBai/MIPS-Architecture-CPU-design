module ext(a, Ext_op , y) ;
input [15:0] a ;
input Ext_op ;
output [31:0] y ;
assign y = Ext_op ? {{16{a[15]}}, a} : {16'b0 , a};
endmodule