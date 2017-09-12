*
* Generic triode model: 12AU7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:35 2006
.SUBCKT 12AU7 A G K
BGG   GG   0 V=V(G,K)+0.89005722
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.028826571*(URAMP(V(EP)-1e-10)+1e-10))^-0.90897681
BM2   M2   0 V=(0.622671*(URAMP(V(GG)+V(EP)/13.089625)+1e-10))^2.4089768
BP    P    0 V=0.00087237591*(URAMP(V(GG)+V(EP)/21.021735)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00055330711*V(M1)*V(M2)
BIG   IG   0 V=0.00043618795*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00049917061*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.5p
CGK   G    K 1.6p
CAK   A    K 0.4p
.ENDS
