*
* Generic triode model: 5687
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:40 2006
.SUBCKT 5687 A G K
BGG   GG   0 V=V(G,K)+0.35624804
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.022532918*(URAMP(V(EP)-1e-10)+1e-10))^-0.73087992
BM2   M2   0 V=(0.67238043*(URAMP(V(GG)+V(EP)/14.539598)+1e-10))^2.2308799
BP    P    0 V=0.0048744976*(URAMP(V(GG)+V(EP)/21.624065)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0028821468*V(M1)*V(M2)
BIG   IG   0 V=0.0024372488*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0027792585*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4p
CGK   G    K 4p
CAK   A    K 0.6p
.ENDS
