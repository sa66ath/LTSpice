*
* Generic triode model: 6072
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:48 2006
.SUBCKT 6072 A G K
BGG   GG   0 V=V(G,K)+0.75743218
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0057774859*(URAMP(V(EP)-1e-10)+1e-10))^-0.42611934
BM2   M2   0 V=(0.77876794*(URAMP(V(GG)+V(EP)/38.292098)+1e-10))^1.9261193
BP    P    0 V=0.00098547839*(URAMP(V(GG)+V(EP)/49.1701)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00057643098*V(M1)*V(M2)
BIG   IG   0 V=0.0004927392*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00052295488*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.4p
CGK   G    K 1.4p
CAK   A    K 0.5p
.ENDS
