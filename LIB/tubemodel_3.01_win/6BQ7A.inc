*
* Generic triode model: 6BQ7A
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:47 2006
.SUBCKT 6BQ7A A G K
BGG   GG   0 V=V(G,K)+0.20509979
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.018083864*(URAMP(V(EP)-1e-10)+1e-10))^-1.3247636
BM2   M2   0 V=(0.53101788*(URAMP(V(GG)+V(EP)/25.933734)+1e-10))^2.8247636
BP    P    0 V=0.004700912*(URAMP(V(GG)+V(EP)/48.837779)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.003987561*V(M1)*V(M2)
BIG   IG   0 V=0.0024349538*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00085381496*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.2p
CGK   G    K 2.6p
CAK   A    K 1.2p
.ENDS
