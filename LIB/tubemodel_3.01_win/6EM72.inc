*
* Generic triode model: 6EM72
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:22 2006
.SUBCKT 6EM72 A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.14621502*(URAMP(V(EP)-1e-10)+1e-10))^-1.6688267
BM2   M2   0 V=(0.47336133*(URAMP(V(GG)+V(EP)/3.6018096)+1e-10))^3.1688267
BP    P    0 V=0.0036325945*(URAMP(V(GG)+V(EP)/7.6090068)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0043402717*V(M1)*V(M2)
BIG   IG   0 V=0.0018162972*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0025554449*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 10p
CGK   G    K 7p
CAK   A    K 1.8p
.ENDS
