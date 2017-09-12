*
* Generic triode model: 77T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:23 2006
.SUBCKT 77T A G K
BGG   GG   0 V=V(G,K)+-1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0016865419*(URAMP(V(EP)-1e-10)+1e-10))^-0.038461538
BM2   M2   0 V=(0.975*(URAMP(V(GG)+V(EP)/14.823231)+1e-10))^1.5384615
BP    P    0 V=0.00049759802*(URAMP(V(GG)+V(EP)/15.203314)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00043219909*V(M1)*V(M2)
BIG   IG   0 V=0.00024879901*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00029869203*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.9p
CGK   G    K 2.8p
CAK   A    K 11p
.ENDS
