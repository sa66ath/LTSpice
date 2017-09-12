*
* Generic triode model: 12A
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:56 2006
.SUBCKT 12A A G K
BGG   GG   0 V=V(G,K)+-0.99999998
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.02099402*(URAMP(V(EP)-1e-10)+1e-10))^-0.30518364
BM2   M2   0 V=(0.83094039*(URAMP(V(GG)+V(EP)/8.0527506)+1e-10))^1.8051836
BP    P    0 V=0.00060950916*(URAMP(V(GG)+V(EP)/9.6911291)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00037491826*V(M1)*V(M2)
BIG   IG   0 V=0.00030475458*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00040148822*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 8.5p
CGK   G    K 4p
CAK   A    K 2p
.ENDS
