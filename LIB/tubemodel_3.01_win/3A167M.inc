*
* Generic triode model: 3A167M
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:24 2006
.SUBCKT 3A167M A G K
BGG   GG   0 V=V(G,K)+0.41219892
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0067454169*(URAMP(V(EP)-1e-10)+1e-10))^-0.5944305
BM2   M2   0 V=(0.71618514*(URAMP(V(GG)+V(EP)/42.075214)+1e-10))^2.0944305
BP    P    0 V=0.034181438*(URAMP(V(GG)+V(EP)/58.749074)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.01971674*V(M1)*V(M2)
BIG   IG   0 V=0.017090719*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.017967154*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4p
CGK   G    K 11p
CAK   A    K 2.5p
.ENDS
