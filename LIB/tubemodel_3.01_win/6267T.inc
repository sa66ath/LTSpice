*
* Generic triode model: 6267T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:56 2006
.SUBCKT 6267T A G K
BGG   GG   0 V=V(G,K)+0.59868749
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.010782364*(URAMP(V(EP)-1e-10)+1e-10))^-0.70765893
BM2   M2   0 V=(0.67945278*(URAMP(V(GG)+V(EP)/29.728844)+1e-10))^2.2076589
BP    P    0 V=0.0013378994*(URAMP(V(GG)+V(EP)/43.754099)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00078620809*V(M1)*V(M2)
BIG   IG   0 V=0.00066894969*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00071507731*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.6p
CGK   G    K 2.3p
CAK   A    K 5.3p
.ENDS
