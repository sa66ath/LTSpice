*
* Generic triode model: EL95T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:38 2006
.SUBCKT EL95T A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.012612458*(URAMP(V(EP)-1e-10)+1e-10))^-0.34815571
BM2   M2   0 V=(0.81161993*(URAMP(V(GG)+V(EP)/14.936032)+1e-10))^1.8481557
BP    P    0 V=0.001923993*(URAMP(V(GG)+V(EP)/18.402742)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0011570767*V(M1)*V(M2)
BIG   IG   0 V=0.00096199651*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0011209319*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.5p
CGK   G    K 3.2p
CAK   A    K 3.5p
.ENDS
