*
* Generic triode model: 6SL7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:22 2006
.SUBCKT 6SL7 A G K
BGG   GG   0 V=V(G,K)+0.34892993
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.00093777395*(URAMP(V(EP)-1e-10)+1e-10))^-0.098159943
BM2   M2   0 V=(0.9385794*(URAMP(V(GG)+V(EP)/65.496168)+1e-10))^1.5981599
BP    P    0 V=0.00080166786*(URAMP(V(GG)+V(EP)/69.782235)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00061341966*V(M1)*V(M2)
BIG   IG   0 V=0.00040083393*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00041812772*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.8p
CGK   G    K 3.4p
CAK   A    K 3.8p
.ENDS
