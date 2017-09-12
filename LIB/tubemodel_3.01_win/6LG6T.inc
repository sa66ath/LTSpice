*
* Generic triode model: 6LG6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:10 2006
.SUBCKT 6LG6T A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.11768156*(URAMP(V(EP)-1e-10)+1e-10))^-0.95241752
BM2   M2   0 V=(0.61164136*(URAMP(V(GG)+V(EP)/3.3000807)+1e-10))^2.4524175
BP    P    0 V=0.0055353672*(URAMP(V(GG)+V(EP)/5.3954505)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.003591442*V(M1)*V(M2)
BIG   IG   0 V=0.0027676836*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0043758251*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 10.5p
CGK   G    K 14.5p
CAK   A    K 12.2p
.ENDS
