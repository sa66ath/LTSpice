*
* Generic triode model: 7591T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:08 2006
.SUBCKT 7591T A G K
BGG   GG   0 V=V(G,K)+0.99926889
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.013694604*(URAMP(V(EP)-1e-10)+1e-10))^-0.39656351
BM2   M2   0 V=(0.79090417*(URAMP(V(GG)+V(EP)/15.268483)+1e-10))^1.8965635
BP    P    0 V=0.0034491916*(URAMP(V(GG)+V(EP)/19.305098)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0020351267*V(M1)*V(M2)
BIG   IG   0 V=0.0017245958*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0019960381*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.2p
CGK   G    K 5.9p
CAK   A    K 4.8p
.ENDS
