*
* Generic triode model: 6BR7T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:48 2006
.SUBCKT 6BR7T A G K
BGG   GG   0 V=V(G,K)+0.48180983
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.013959713*(URAMP(V(EP)-1e-10)+1e-10))^-0.49250535
BM2   M2   0 V=(0.75282107*(URAMP(V(GG)+V(EP)/17.706591)+1e-10))^1.9925054
BP    P    0 V=0.00084041925*(URAMP(V(GG)+V(EP)/23.520318)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00048560243*V(M1)*V(M2)
BIG   IG   0 V=0.00042020962*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00047437278*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.6p
CGK   G    K 2.4p
CAK   A    K 4p
.ENDS
