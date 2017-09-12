*
* Generic triode model: 6EJ7T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:17 2006
.SUBCKT 6EJ7T A G K
BGG   GG   0 V=V(G,K)+0.40321166
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0054275937*(URAMP(V(EP)-1e-10)+1e-10))^-0.61801526
BM2   M2   0 V=(0.7082102*(URAMP(V(GG)+V(EP)/53.760436)+1e-10))^2.1180153
BP    P    0 V=0.019963362*(URAMP(V(GG)+V(EP)/75.910283)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.011540933*V(M1)*V(M2)
BIG   IG   0 V=0.0099816812*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.010377457*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4p
CGK   G    K 6p
CAK   A    K 3p
.ENDS
