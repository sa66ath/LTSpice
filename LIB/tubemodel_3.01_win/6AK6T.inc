*
* Generic triode model: 6AK6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:31 2006
.SUBCKT 6AK6T A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.047037015*(URAMP(V(EP)-1e-10)+1e-10))^-0.80231696
BM2   M2   0 V=(0.65151759*(URAMP(V(GG)+V(EP)/7.4086847)+1e-10))^2.302317
BP    P    0 V=0.00071109747*(URAMP(V(GG)+V(EP)/11.371427)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00043043074*V(M1)*V(M2)
BIG   IG   0 V=0.00035554873*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00045138222*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.5p
CGK   G    K 2.1p
CAK   A    K 4.1p
.ENDS
