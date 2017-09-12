*
* Generic triode model: 6550AT
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:03 2006
.SUBCKT 6550AT A G K
BGG   GG   0 V=V(G,K)+0.1919366
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.064698506*(URAMP(V(EP)-1e-10)+1e-10))^-0.90961742
BM2   M2   0 V=(0.62250546*(URAMP(V(GG)+V(EP)/5.8346717)+1e-10))^2.4096174
BP    P    0 V=0.0027588474*(URAMP(V(GG)+V(EP)/9.3728844)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0017503674*V(M1)*V(M2)
BIG   IG   0 V=0.0013794237*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0018325138*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 6.5p
CGK   G    K 8.6p
CAK   A    K 9.2p
.ENDS
