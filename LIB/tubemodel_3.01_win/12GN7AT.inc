*
* Generic triode model: 12GN7AT
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:44 2006
.SUBCKT 12GN7AT A G K
BGG   GG   0 V=V(G,K)+-0.52499611
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0070794303*(URAMP(V(EP)-1e-10)+1e-10))^-0.51284817
BM2   M2   0 V=(0.74521269*(URAMP(V(GG)+V(EP)/35.989804)+1e-10))^2.0128482
BP    P    0 V=0.032317671*(URAMP(V(GG)+V(EP)/48.294674)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.018638041*V(M1)*V(M2)
BIG   IG   0 V=0.016158835*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.017167779*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 7.1p
CGK   G    K 10.4p
CAK   A    K 3.9p
.ENDS
