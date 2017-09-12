*
* Generic triode model: 14AF7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:27:50 2006
.SUBCKT 14AF7 A G K
BGG   GG   0 V=V(G,K)+0.77793828
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0061215684*(URAMP(V(EP)-1e-10)+1e-10))^-0.15594912
BM2   M2   0 V=(0.90582493*(URAMP(V(GG)+V(EP)/15.38414)+1e-10))^1.6559491
BP    P    0 V=0.00066812333*(URAMP(V(GG)+V(EP)/16.983569)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00046939857*V(M1)*V(M2)
BIG   IG   0 V=0.00033406167*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00039393104*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.3p
CGK   G    K 2.2p
CAK   A    K 1.6p
.ENDS
