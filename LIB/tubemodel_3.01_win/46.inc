*
* Generic triode model: 46
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:03 2006
.SUBCKT 46 A G K
BGG   GG   0 V=V(G,K)+-0.6332578
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.012087887*(URAMP(V(EP)-1e-10)+1e-10))^-1.4892322
BM2   M2   0 V=(0.50180111*(URAMP(V(GG)+V(EP)/41.214721)+1e-10))^2.9892322
BP    P    0 V=0.00056616214*(URAMP(V(GG)+V(EP)/82.13358)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0005601202*V(M1)*V(M2)
BIG   IG   0 V=0.00016122035*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00033941125*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4p
CGK   G    K 4p
CAK   A    K 4p
.ENDS
