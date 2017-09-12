*
* Generic triode model: 6KV6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:24:20 2006
.SUBCKT 6KV6T A G K
BGG   GG   0 V=V(G,K)+0.54068766
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.16946569*(URAMP(V(EP)-1e-10)+1e-10))^-1.5135418
BM2   M2   0 V=(0.49775318*(URAMP(V(GG)+V(EP)/2.9637081)+1e-10))^3.0135418
BP    P    0 V=0.0050742729*(URAMP(V(GG)+V(EP)/5.9541722)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0051437685*V(M1)*V(M2)
BIG   IG   0 V=0.0025371364*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0038677273*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 9.2p
CGK   G    K 12.9p
CAK   A    K 8.4p
.ENDS
