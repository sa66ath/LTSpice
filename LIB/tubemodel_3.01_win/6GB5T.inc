*
* Generic triode model: 6GB5T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:35 2006
.SUBCKT 6GB5T A G K
BGG   GG   0 V=V(G,K)+0.84509256
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.074600608*(URAMP(V(EP)-1e-10)+1e-10))^-0.78902807
BM2   M2   0 V=(0.65529996*(URAMP(V(GG)+V(EP)/4.6206063)+1e-10))^2.2890281
BP    P    0 V=0.0051497371*(URAMP(V(GG)+V(EP)/7.0511317)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0031020384*V(M1)*V(M2)
BIG   IG   0 V=0.0025748686*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0037083507*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 10.4p
CGK   G    K 12.9p
CAK   A    K 9.4p
.ENDS
