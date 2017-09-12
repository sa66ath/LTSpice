*
* Generic triode model: ECC35
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:25 2006
.SUBCKT ECC35 A G K
BGG   GG   0 V=V(G,K)+0.62544373
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0050202395*(URAMP(V(EP)-1e-10)+1e-10))^-0.5890158
BM2   M2   0 V=(0.71804148*(URAMP(V(GG)+V(EP)/56.164356)+1e-10))^2.0890158
BP    P    0 V=0.001261268*(URAMP(V(GG)+V(EP)/78.218818)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00072725712*V(M1)*V(M2)
BIG   IG   0 V=0.000630634*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00065489844*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 3p
CGK   G    K 3p
CAK   A    K 1.3p
.ENDS
