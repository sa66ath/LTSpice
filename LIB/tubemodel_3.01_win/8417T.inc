*
* Generic triode model: 8417T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:12 2006
.SUBCKT 8417T A G K
BGG   GG   0 V=V(G,K)+0.63054378
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.036846957*(URAMP(V(EP)-1e-10)+1e-10))^-1.2260611
BM2   M2   0 V=(0.55024446*(URAMP(V(GG)+V(EP)/12.206043)+1e-10))^2.7260611
BP    P    0 V=0.0099006053*(URAMP(V(GG)+V(EP)/22.182946)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0077318666*V(M1)*V(M2)
BIG   IG   0 V=0.0049503027*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0056272659*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 9.4p
CGK   G    K 12.7p
CAK   A    K 8.1p
.ENDS
