module dm_4( addr , din , we , clk , dout);
input clk ;
input [11:2] addr ; //address bus
input [31:0] din ;  //32-bit input data
input        we ; //memory write enable
output [31:0] dout ; //32-bit memory output

reg [31:0] dm[1023:0];

assign dout = dm[ addr[11:2] ]; //read

always @ ( posedge clk)
if(we)  //we==1 do write
   dm[ addr[11:2] ] <= din;

endmodule
