*
* Generic triode model: 6146BT
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:51 2006
.SUBCKT 6146BT A G K
BGG   GG   0 V=V(G,K)+0.99999998
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.058258554*(URAMP(V(EP)-1e-10)+1e-10))^-0.41427032
BM2   M2   0 V=(0.78358839*(URAMP(V(GG)+V(EP)/3.7146753)+1e-10))^1.9142703
BP    P    0 V=0.001563206*(URAMP(V(GG)+V(EP)/4.7405951)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0009173158*V(M1)*V(M2)
BIG   IG   0 V=0.000781603*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0013014595*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 5.3p
CGK   G    K 7.7p
CAK   A    K 8.3p
.ENDS
