*
* Generic triode model: 2A3
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:23 2006
.SUBCKT 2A3 A G K
BGG   GG   0 V=V(G,K)+-0.47258991
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.056835059*(URAMP(V(EP)-1e-10)+1e-10))^-0.4044593
BM2   M2   0 V=(0.78762513*(URAMP(V(GG)+V(EP)/3.7366878)+1e-10))^1.9044593
BP    P    0 V=0.0012053852*(URAMP(V(GG)+V(EP)/4.7442465)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.000709416*V(M1)*V(M2)
BIG   IG   0 V=0.00060269261*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0010032299*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 16.5p
CGK   G    K 7.5p
CAK   A    K 5.5p
.ENDS
