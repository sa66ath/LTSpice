*
* Generic triode model: 50HB26T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:51 2006
.SUBCKT 50HB26T A G K
BGG   GG   0 V=V(G,K)+0.99999978
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.092479665*(URAMP(V(EP)-1e-10)+1e-10))^-0.92218999
BM2   M2   0 V=(0.61927429*(URAMP(V(GG)+V(EP)/4.1168586)+1e-10))^2.42219
BP    P    0 V=0.0043389918*(URAMP(V(GG)+V(EP)/6.6478758)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0027704924*V(M1)*V(M2)
BIG   IG   0 V=0.0021694959*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0031844715*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 7.6p
CGK   G    K 9.8p
CAK   A    K 6.7p
.ENDS
