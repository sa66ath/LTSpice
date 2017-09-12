*
* Generic triode model: 6BQ6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:46 2006
.SUBCKT 6BQ6T A G K
BGG   GG   0 V=V(G,K)+-0.12830687
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.15009144*(URAMP(V(EP)-1e-10)+1e-10))^-1.2848724
BM2   M2   0 V=(0.53862432*(URAMP(V(GG)+V(EP)/3.0739639)+1e-10))^2.7848724
BP    P    0 V=0.0022372419*(URAMP(V(GG)+V(EP)/5.7070648)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0018337045*V(M1)*V(M2)
BIG   IG   0 V=0.0011186209*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0017316916*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 6.4p
CGK   G    K 8.7p
CAK   A    K 6.4p
.ENDS
