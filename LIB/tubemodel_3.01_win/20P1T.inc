*
* Generic triode model: 20P1T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:45 2006
.SUBCKT 20P1T A G K
BGG   GG   0 V=V(G,K)+0.99999997
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.15450603*(URAMP(V(EP)-1e-10)+1e-10))^-1.2979847
BM2   M2   0 V=(0.53610015*(URAMP(V(GG)+V(EP)/3.0024709)+1e-10))^2.7979847
BP    P    0 V=0.002051274*(URAMP(V(GG)+V(EP)/5.6005784)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0017001298*V(M1)*V(M2)
BIG   IG   0 V=0.001025637*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0015988677*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 9.5p
CGK   G    K 13.5p
CAK   A    K 10.5p
.ENDS
