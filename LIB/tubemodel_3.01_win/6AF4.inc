*
* Generic triode model: 6AF4
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:27 2006
.SUBCKT 6AF4 A G K
BGG   GG   0 V=V(G,K)+0.77962386
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.090647641*(URAMP(V(EP)-1e-10)+1e-10))^-2.2226779
BM2   M2   0 V=(0.40293575*(URAMP(V(GG)+V(EP)/6.5866497)+1e-10))^3.7226779
BP    P    0 V=0.0031145251*(URAMP(V(GG)+V(EP)/16.34665)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0074643586*V(M1)*V(M2)
BIG   IG   0 V=0.00128701*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0012749818*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.9p
CGK   G    K 2.2p
CAK   A    K 1.4p
.ENDS
