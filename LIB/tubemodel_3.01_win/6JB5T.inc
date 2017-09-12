*
* Generic triode model: 6JB5T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:45 2006
.SUBCKT 6JB5T A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.16129088*(URAMP(V(EP)-1e-10)+1e-10))^-2.7283665
BM2   M2   0 V=(0.35474692*(URAMP(V(GG)+V(EP)/4.0005552)+1e-10))^4.2283665
BP    P    0 V=0.0020818822*(URAMP(V(GG)+V(EP)/11.277209)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0106492*V(M1)*V(M2)
BIG   IG   0 V=0.0010409411*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0013239066*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.1p
CGK   G    K 5.4p
CAK   A    K 6p
.ENDS
