*
* Generic triode model: KT33CT
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:40 2006
.SUBCKT KT33CT A G K
BGG   GG   0 V=V(G,K)+0.96267547
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.055090322*(URAMP(V(EP)-1e-10)+1e-10))^-0.90062349
BM2   M2   0 V=(0.62483767*(URAMP(V(GG)+V(EP)/6.8099498)+1e-10))^2.4006235
BP    P    0 V=0.0032650112*(URAMP(V(GG)+V(EP)/10.89875)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0020623072*V(M1)*V(M2)
BIG   IG   0 V=0.0016325056*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0020920259*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 8.4p
CGK   G    K 10.8p
CAK   A    K 10.9p
.ENDS
