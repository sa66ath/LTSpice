*
* Generic triode model: 9002
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:14 2006
.SUBCKT 9002 A G K
BGG   GG   0 V=V(G,K)+0.90658712
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.01433184*(URAMP(V(EP)-1e-10)+1e-10))^-0.61356953
BM2   M2   0 V=(0.70969986*(URAMP(V(GG)+V(EP)/20.255608)+1e-10))^2.1135695
BP    P    0 V=0.00098929697*(URAMP(V(GG)+V(EP)/28.541091)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00057163937*V(M1)*V(M2)
BIG   IG   0 V=0.00049464849*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00054709459*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.4p
CGK   G    K 1.2p
CAK   A    K 1.1p
.ENDS
