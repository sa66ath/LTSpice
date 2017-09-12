*
* Generic triode model: 6LB6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:07 2006
.SUBCKT 6LB6T A G K
BGG   GG   0 V=V(G,K)+0.99700414
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.23985722*(URAMP(V(EP)-1e-10)+1e-10))^-1.8495045
BM2   M2   0 V=(0.44782743*(URAMP(V(GG)+V(EP)/2.3020886)+1e-10))^3.3495045
BP    P    0 V=0.0060056363*(URAMP(V(GG)+V(EP)/5.1405708)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0088470322*V(M1)*V(M2)
BIG   IG   0 V=0.0030028181*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.004837887*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 13.5p
CGK   G    K 19.5p
CAK   A    K 17.6p
.ENDS
