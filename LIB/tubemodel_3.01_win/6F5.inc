*
* Generic triode model: 6F5
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:27 2006
.SUBCKT 6F5 A G K
BGG   GG   0 V=V(G,K)+0.58201919
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0023425283*(URAMP(V(EP)-1e-10)+1e-10))^-0.39892191
BM2   M2   0 V=(0.7899219*(URAMP(V(GG)+V(EP)/89.68007)+1e-10))^1.8989219
BP    P    0 V=0.00094722724*(URAMP(V(GG)+V(EP)/113.5303)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00055846113*V(M1)*V(M2)
BIG   IG   0 V=0.00047361362*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00048615622*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2p
CGK   G    K 6p
CAK   A    K 12p
.ENDS
