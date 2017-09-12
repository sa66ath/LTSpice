*
* Generic triode model: 6JR6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:50 2006
.SUBCKT 6JR6T A G K
BGG   GG   0 V=V(G,K)+0.99994363
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.13323481*(URAMP(V(EP)-1e-10)+1e-10))^-1.5275541
BM2   M2   0 V=(0.49544944*(URAMP(V(GG)+V(EP)/3.7869273)+1e-10))^3.0275541
BP    P    0 V=0.0072054321*(URAMP(V(GG)+V(EP)/7.6434182)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0074085952*V(M1)*V(M2)
BIG   IG   0 V=0.003602716*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0050620509*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 9.2p
CGK   G    K 12.8p
CAK   A    K 8.3p
.ENDS
