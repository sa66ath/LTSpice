*
* Generic triode model: 6AH4
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:29 2006
.SUBCKT 6AH4 A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.045930854*(URAMP(V(EP)-1e-10)+1e-10))^-0.72062066
BM2   M2   0 V=(0.67548683*(URAMP(V(GG)+V(EP)/7.0652545)+1e-10))^2.2206207
BP    P    0 V=0.0021845366*(URAMP(V(GG)+V(EP)/10.4595)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0012880266*V(M1)*V(M2)
BIG   IG   0 V=0.0010922683*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0014129261*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.4p
CGK   G    K 7p
CAK   A    K 1.7p
.ENDS
