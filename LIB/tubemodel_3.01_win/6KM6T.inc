*
* Generic triode model: 6KM6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:04 2006
.SUBCKT 6KM6T A G K
BGG   GG   0 V=V(G,K)+0.57761874
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.52339318*(URAMP(V(EP)-1e-10)+1e-10))^-5.2554363
BM2   M2   0 V=(0.22204339*(URAMP(V(GG)+V(EP)/1.4863713)+1e-10))^6.7554363
BP    P    0 V=0.006536245*(URAMP(V(GG)+V(EP)/6.6940577)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*4.7534114*V(M1)*V(M2)
BIG   IG   0 V=0.0032681225*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0047861683*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 9.6p
CGK   G    K 12.6p
CAK   A    K 7.9p
.ENDS
