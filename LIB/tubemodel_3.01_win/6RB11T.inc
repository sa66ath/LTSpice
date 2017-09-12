*
* Generic triode model: 6RB11T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:14 2006
.SUBCKT 6RB11T A G K
BGG   GG   0 V=V(G,K)+0.65537204
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.11100294*(URAMP(V(EP)-1e-10)+1e-10))^-2.2938121
BM2   M2   0 V=(0.39538068*(URAMP(V(GG)+V(EP)/5.4468766)+1e-10))^3.7938121
BP    P    0 V=0.0034776823*(URAMP(V(GG)+V(EP)/13.776284)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0092134348*V(M1)*V(M2)
BIG   IG   0 V=0.0017388412*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0021242915*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.4p
CGK   G    K 5.6p
CAK   A    K 6.3p
.ENDS
