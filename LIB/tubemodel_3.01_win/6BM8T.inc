*
* Generic triode model: 6BM8T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:42 2006
.SUBCKT 6BM8T A G K
BGG   GG   0 V=V(G,K)+0.43636433
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0039399689*(URAMP(V(EP)-1e-10)+1e-10))^-0.44800866
BM2   M2   0 V=(0.77001711*(URAMP(V(GG)+V(EP)/58.371753)+1e-10))^1.9480087
BP    P    0 V=0.0015179644*(URAMP(V(GG)+V(EP)/75.805787)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00088337368*V(M1)*V(M2)
BIG   IG   0 V=0.00075898218*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0007891176*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4p
CGK   G    K 2.7p
CAK   A    K 4p
.ENDS
