*
* Generic triode model: EL32T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:34 2006
.SUBCKT EL32T A G K
BGG   GG   0 V=V(G,K)+0.99999999
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.12471331*(URAMP(V(EP)-1e-10)+1e-10))^-1.9909547
BM2   M2   0 V=(0.42968188*(URAMP(V(GG)+V(EP)/4.5730334)+1e-10))^3.4909547
BP    P    0 V=0.0011713028*(URAMP(V(GG)+V(EP)/10.642835)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0020582453*V(M1)*V(M2)
BIG   IG   0 V=0.00058565141*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00075455382*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 5.6p
CGK   G    K 2.4p
CAK   A    K 4p
.ENDS
