*
* Generic triode model: E180CC
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:18 2006
.SUBCKT E180CC A G K
BGG   GG   0 V=V(G,K)+0.56698133
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.01851887*(URAMP(V(EP)-1e-10)+1e-10))^-1.618055
BM2   M2   0 V=(0.48106912*(URAMP(V(GG)+V(EP)/28.021736)+1e-10))^3.118055
BP    P    0 V=0.004697796*(URAMP(V(GG)+V(EP)/58.248876)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0053104514*V(M1)*V(M2)
BIG   IG   0 V=0.002348898*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0024703913*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.3p
CGK   G    K 3.5p
CAK   A    K 0.5p
.ENDS
