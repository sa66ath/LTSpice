*
* Generic triode model: 76
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:23 2006
.SUBCKT 76 A G K
BGG   GG   0 V=V(G,K)+0.99999999
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.021188923*(URAMP(V(EP)-1e-10)+1e-10))^-0.55369678
BM2   M2   0 V=(0.7303902*(URAMP(V(GG)+V(EP)/12.724092)+1e-10))^2.0536968
BP    P    0 V=0.00075511262*(URAMP(V(GG)+V(EP)/17.420951)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00043487165*V(M1)*V(M2)
BIG   IG   0 V=0.00037755631*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00044349824*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.8p
CGK   G    K 3.5p
CAK   A    K 2.5p
.ENDS
