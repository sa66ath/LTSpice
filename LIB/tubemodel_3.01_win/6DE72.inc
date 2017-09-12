*
* Generic triode model: 6DE72
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:09 2006
.SUBCKT 6DE72 A G K
BGG   GG   0 V=V(G,K)+0.99984307
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.13594315*(URAMP(V(EP)-1e-10)+1e-10))^-2.0119972
BM2   M2   0 V=(0.4271074*(URAMP(V(GG)+V(EP)/4.2142073)+1e-10))^3.5119972
BP    P    0 V=0.0042161959*(URAMP(V(GG)+V(EP)/9.8668561)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0076124257*V(M1)*V(M2)
BIG   IG   0 V=0.0021080979*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0027650373*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 8.5p
CGK   G    K 5.5p
CAK   A    K 1p
.ENDS
