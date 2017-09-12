*
* Generic triode model: 6C8
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:53 2006
.SUBCKT 6C8 A G K
BGG   GG   0 V=V(G,K)+0.83697566
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0025120128*(URAMP(V(EP)-1e-10)+1e-10))^-0.14595588
BM2   M2   0 V=(0.91132455*(URAMP(V(GG)+V(EP)/35.300556)+1e-10))^1.6459559
BP    P    0 V=0.00061711142*(URAMP(V(GG)+V(EP)/38.735438)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00043921307*V(M1)*V(M2)
BIG   IG   0 V=0.00030855571*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00033260645*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.6p
CGK   G    K 2.6p
CAK   A    K 2.2p
.ENDS
