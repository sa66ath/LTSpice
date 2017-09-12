*
* Generic triode model: 53
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:08 2006
.SUBCKT 53 A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.00077005461*(URAMP(V(EP)-1e-10)+1e-10))^-0.038461586
BM2   M2   0 V=(0.97499997*(URAMP(V(GG)+V(EP)/32.465269)+1e-10))^1.5384616
BP    P    0 V=0.00055508206*(URAMP(V(GG)+V(EP)/33.297713)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00048212799*V(M1)*V(M2)
BIG   IG   0 V=0.00016903085*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00042499185*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4p
CGK   G    K 4p
CAK   A    K 4p
.ENDS
