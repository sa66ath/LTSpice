*
* Generic triode model: 8045G
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:10 2006
.SUBCKT 8045G A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.16254949*(URAMP(V(EP)-1e-10)+1e-10))^-1.8473377
BM2   M2   0 V=(0.44811732*(URAMP(V(GG)+V(EP)/3.3951672)+1e-10))^3.3473377
BP    P    0 V=0.006744417*(URAMP(V(GG)+V(EP)/7.5765141)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0099093555*V(M1)*V(M2)
BIG   IG   0 V=0.0033722085*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0047506048*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 16p
CGK   G    K 24p
CAK   A    K 16p
.ENDS
