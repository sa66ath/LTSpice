*
* Generic triode model: 35C5T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:50 2006
.SUBCKT 35C5T A G K
BGG   GG   0 V=V(G,K)+0.99999998
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.12544688*(URAMP(V(EP)-1e-10)+1e-10))^-1.6161868
BM2   M2   0 V=(0.48135753*(URAMP(V(GG)+V(EP)/4.1343593)+1e-10))^3.1161868
BP    P    0 V=0.0021455369*(URAMP(V(GG)+V(EP)/8.5889574)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0024204769*V(M1)*V(M2)
BIG   IG   0 V=0.0010727685*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0014581748*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 5.2p
CGK   G    K 6.9p
CAK   A    K 8.4p
.ENDS
