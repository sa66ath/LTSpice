*
* Generic triode model: 6C5
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:52 2006
.SUBCKT 6C5 A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.02848961*(URAMP(V(EP)-1e-10)+1e-10))^-1.0152318
BM2   M2   0 V=(0.5963665*(URAMP(V(GG)+V(EP)/14.167744)+1e-10))^2.5152318
BP    P    0 V=0.00080299639*(URAMP(V(GG)+V(EP)/23.756774)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00054026317*V(M1)*V(M2)
BIG   IG   0 V=0.0004014982*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00045272916*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.8p
CGK   G    K 4p
CAK   A    K 13p
.ENDS
