*
* Generic triode model: 6CB6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:00 2006
.SUBCKT 6CB6T A G K
BGG   GG   0 V=V(G,K)+0.7350712
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.031445788*(URAMP(V(EP)-1e-10)+1e-10))^-2.20504
BM2   M2   0 V=(0.40485393*(URAMP(V(GG)+V(EP)/18.926098)+1e-10))^3.70504
BP    P    0 V=0.0046867337*(URAMP(V(GG)+V(EP)/46.747967)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.010960467*V(M1)*V(M2)
BIG   IG   0 V=0.0023433669*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0024945513*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.6p
CGK   G    K 3.9p
CAK   A    K 1.9p
.ENDS
