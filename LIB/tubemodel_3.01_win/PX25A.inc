*
* Generic triode model: PX25A
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:58 2006
.SUBCKT PX25A A G K
BGG   GG   0 V=V(G,K)+-0.75925792
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.10259158*(URAMP(V(EP)-1e-10)+1e-10))^-0.6493098
BM2   M2   0 V=(0.69789846*(URAMP(V(GG)+V(EP)/2.944701)+1e-10))^2.1493098
BP    P    0 V=0.0013209842*(URAMP(V(GG)+V(EP)/4.2193831)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00076697829*V(M1)*V(M2)
BIG   IG   0 V=0.00066049212*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0011569181*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 14.8p
CGK   G    K 11.4p
CAK   A    K 8.3p
.ENDS
