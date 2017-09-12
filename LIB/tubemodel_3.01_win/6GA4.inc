*
* Generic triode model: 6GA4
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:33 2006
.SUBCKT 6GA4 A G K
BGG   GG   0 V=V(G,K)+0.99999993
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.049332301*(URAMP(V(EP)-1e-10)+1e-10))^-1.0124121
BM2   M2   0 V=(0.59703582*(URAMP(V(GG)+V(EP)/8.1683638)+1e-10))^2.5124121
BP    P    0 V=0.0045336089*(URAMP(V(GG)+V(EP)/13.681531)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0030450256*V(M1)*V(M2)
BIG   IG   0 V=0.0022668045*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0027728299*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 6.5p
CGK   G    K 5p
CAK   A    K 1.2p
.ENDS
