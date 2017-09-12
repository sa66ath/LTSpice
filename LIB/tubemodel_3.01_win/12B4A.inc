*
* Generic triode model: 12B4A
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:39 2006
.SUBCKT 12B4A A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.087065329*(URAMP(V(EP)-1e-10)+1e-10))^-1.2036947
BM2   M2   0 V=(0.55479636*(URAMP(V(GG)+V(EP)/5.1134435)+1e-10))^2.7036947
BP    P    0 V=0.0047680512*(URAMP(V(GG)+V(EP)/9.2167935)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0036584566*V(M1)*V(M2)
BIG   IG   0 V=0.0023840256*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0031806909*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.8p
CGK   G    K 5p
CAK   A    K 1.5p
.ENDS
