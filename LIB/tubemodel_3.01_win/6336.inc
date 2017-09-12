*
* Generic triode model: 6336
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:57 2006
.SUBCKT 6336 A G K
BGG   GG   0 V=V(G,K)+0.80124916
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.24089702*(URAMP(V(EP)-1e-10)+1e-10))^-1.5151382
BM2   M2   0 V=(0.49748964*(URAMP(V(GG)+V(EP)/2.0859966)+1e-10))^3.0151382
BP    P    0 V=0.0055122338*(URAMP(V(GG)+V(EP)/4.1930453)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0055967398*V(M1)*V(M2)
BIG   IG   0 V=0.0027561169*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0048413089*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 16p
CGK   G    K 14p
CAK   A    K 5p
.ENDS