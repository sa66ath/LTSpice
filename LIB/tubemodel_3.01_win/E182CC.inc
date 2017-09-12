*
* Generic triode model: E182CC
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:19 2006
.SUBCKT E182CC A G K
BGG   GG   0 V=V(G,K)+0.56912497
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.020096637*(URAMP(V(EP)-1e-10)+1e-10))^-0.83371956
BM2   M2   0 V=(0.64275075*(URAMP(V(GG)+V(EP)/17.776569)+1e-10))^2.3337196
BP    P    0 V=0.0068220515*(URAMP(V(GG)+V(EP)/27.657018)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0041807778*V(M1)*V(M2)
BIG   IG   0 V=0.0034110257*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0037843497*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.1p
CGK   G    K 6p
CAK   A    K 1.1p
.ENDS
