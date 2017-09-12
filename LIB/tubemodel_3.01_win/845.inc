*
* Generic triode model: 845
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:36 2006
.SUBCKT 845 A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.097678365*(URAMP(V(EP)-1e-10)+1e-10))^-1.1468909
BM2   M2   0 V=(0.56670261*(URAMP(V(GG)+V(EP)/4.4359607)+1e-10))^2.6468909
BP    P    0 V=0.00074300992*(URAMP(V(GG)+V(EP)/7.8276694)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00054613816*V(M1)*V(M2)
BIG   IG   0 V=0.00037150496*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00051834132*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 13.5p
CGK   G    K 6p
CAK   A    K 6.5p
.ENDS
