*
* Generic triode model: 50
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:05 2006
.SUBCKT 50 A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.053592842*(URAMP(V(EP)-1e-10)+1e-10))^-0.32643301
BM2   M2   0 V=(0.82127293*(URAMP(V(GG)+V(EP)/3.3349055)+1e-10))^1.826433
BP    P    0 V=0.00024452775*(URAMP(V(GG)+V(EP)/4.0606543)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0001486389*V(M1)*V(M2)
BIG   IG   0 V=0.00012226387*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00021794382*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4p
CGK   G    K 4p
CAK   A    K 4p
.ENDS
