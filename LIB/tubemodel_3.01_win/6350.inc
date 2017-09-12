*
* Generic triode model: 6350
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:58 2006
.SUBCKT 6350 A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.018707344*(URAMP(V(EP)-1e-10)+1e-10))^-0.6749557
BM2   M2   0 V=(0.68966922*(URAMP(V(GG)+V(EP)/16.588714)+1e-10))^2.1749557
BP    P    0 V=0.0025107579*(URAMP(V(GG)+V(EP)/24.053145)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0014646013*V(M1)*V(M2)
BIG   IG   0 V=0.001255379*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0014135709*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 3.2p
CGK   G    K 3.6p
CAK   A    K 0.6p
.ENDS
