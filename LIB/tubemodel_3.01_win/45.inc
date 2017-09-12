*
* Generic triode model: 45
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:02 2006
.SUBCKT 45 A G K
BGG   GG   0 V=V(G,K)+-0.36938318
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.072484305*(URAMP(V(EP)-1e-10)+1e-10))^-0.45086063
BM2   M2   0 V=(0.76889142*(URAMP(V(GG)+V(EP)/3.1883948)+1e-10))^1.9508606
BP    P    0 V=0.00046886056*(URAMP(V(GG)+V(EP)/4.1467426)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00027269199*V(M1)*V(M2)
BIG   IG   0 V=0.00023443028*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00041387828*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 7p
CGK   G    K 4p
CAK   A    K 3p
.ENDS
