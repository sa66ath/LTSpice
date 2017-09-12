*
* Generic triode model: 6AQ8
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:36 2006
.SUBCKT 6AQ8 A G K
BGG   GG   0 V=V(G,K)+0.46274
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.016397559*(URAMP(V(EP)-1e-10)+1e-10))^-1.8244468
BM2   M2   0 V=(0.45120289*(URAMP(V(GG)+V(EP)/33.468219)+1e-10))^3.3244468
BP    P    0 V=0.0053412983*(URAMP(V(GG)+V(EP)/74.175541)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0076348*V(M1)*V(M2)
BIG   IG   0 V=0.0026706491*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0027790257*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.5p
CGK   G    K 3.1p
CAK   A    K 1.2p
.ENDS
