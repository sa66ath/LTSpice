*
* Generic triode model: 6CA10
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:57 2006
.SUBCKT 6CA10 A G K
BGG   GG   0 V=V(G,K)+0.85922191
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.052995899*(URAMP(V(EP)-1e-10)+1e-10))^-0.89537568
BM2   M2   0 V=(0.62620657*(URAMP(V(GG)+V(EP)/7.0532519)+1e-10))^2.3953757
BP    P    0 V=0.0063159843*(URAMP(V(GG)+V(EP)/11.263459)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.003979238*V(M1)*V(M2)
BIG   IG   0 V=0.0031579921*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.004017519*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 16p
CGK   G    K 24p
CAK   A    K 16p
.ENDS
