*
* Generic triode model: 6BL8T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:40 2006
.SUBCKT 6BL8T A G K
BGG   GG   0 V=V(G,K)+0.9999996
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.034840251*(URAMP(V(EP)-1e-10)+1e-10))^-1.1549542
BM2   M2   0 V=(0.5649815*(URAMP(V(GG)+V(EP)/12.48609)+1e-10))^2.6549542
BP    P    0 V=0.002049189*(URAMP(V(GG)+V(EP)/22.099998)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0015151796*V(M1)*V(M2)
BIG   IG   0 V=0.0010245945*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0011652414*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.5p
CGK   G    K 2.5p
CAK   A    K 1.8p
.ENDS
