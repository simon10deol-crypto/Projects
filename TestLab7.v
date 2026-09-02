module TestLab7(); 

reg H, L, R, clk, clear; 

wire Q1, Q2, Q3, LA, LB, LC, RA, RB, RC; 

Lab7 Lab7_2(.H(H), .L(L), .R(R), .clk(clk), .clear(clear), .Q1(Q1), .Q2(Q2), .Q3(Q3), .LA(LA), .LB(LB), .LC(LC), .RA(RA), .RB(RB), .RC(RC));
 
initial begin

H = 0;
L = 0;
R = 0;
clear = 0;
clk = 0;

#10;
clear = 1;

H = 0; L = 0; R = 0;
clk = 0; #10; clk = 1; #10; clk = 0; #10;

H = 0; L = 0; R = 1;
clk = 0; #10; clk = 1; #10; clk = 0; #10;

H = 0; L = 1; R = 0;
clk = 0; #10; clk = 1; #10; clk = 0; #10;

H = 0; L = 1; R = 1;
clk = 0; #10; clk = 1; #10; clk = 0; #10;

H = 1; L = 0; R = 0;
clk = 0; #10; clk = 1; #10; clk = 0; #10;

H = 1; L = 0; R = 1;
clk = 0; #10; clk = 1; #10; clk = 0; #10;

H = 1; L = 1; R = 0;
clk = 0; #10; clk = 1; #10; clk = 0; #10;

H = 1; L = 1; R = 1;
clk = 0; #10; clk = 1; #10; clk = 0; #10;
end
	

endmodule 