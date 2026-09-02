// Following Module / Creating my own from example however.

module Lab7(H, L, R, clk,clear, Q1, Q2, Q3, LA, LB, LC, RA, RB, RC);

input H, L, R, clk, clear;
output Q1, Q2, Q3, LA, LB, LC, RA, RB, RC;
 
wire Q1_bar, Q2_bar, Q3_bar;
wire D1, D2, D3; 


dff dff_1(D1, clk, clear, Q1, Q1_bar);
dff dff_2(D2, clk, clear, Q2, Q2_bar);
dff dff_3(D3, clk, clear, Q3, Q3_bar);

assign D1 = (R & Q2_bar & Q3_bar) | (H & Q1_bar) | (H & Q2_bar) | (R & Q1 & Q2_bar) | (H & Q3_bar);
assign D2 = (H & Q3_bar) | (H & Q2_bar) | (R & Q1 & Q2_bar & Q3) | (H & Q1_bar) | (L & Q1_bar & Q2 & Q3_bar) | (L & Q1_bar & Q2_bar & Q3);
assign D3 = (L & Q1_bar & Q3_bar) | (H & Q1_bar) | (R & Q1 & Q2_bar & Q3_bar) | (H & Q2_bar) | (H & Q3_bar);

assign LC = (Q2 & Q3);
assign LB = (Q1_bar & Q2) | (Q2 & Q3);
assign LA = (Q1_bar & Q3) | (Q1_bar & Q2) | (Q2 & Q3);
assign RA = Q1;
assign RB = (Q1 & Q3) | (Q1 & Q2);
assign RC = (Q1 & Q2);

endmodule 