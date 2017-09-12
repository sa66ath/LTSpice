*
* Generic triode model: 6S4A
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:16 2006
.SUBCKT 6S4A A G K
BGG   GG   0 V=V(G,K)+0.32778768
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.034282937*(URAMP(V(EP)-1e-10)+1e-10))^-1.0247707
BM2   M2   0 V=(0.59411337*(URAMP(V(GG)+V(EP)/11.839319)+1e-10))^2.5247707
BP    P    0 V=0.0017432762*(URAMP(V(GG)+V(EP)/19.92771)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0011797852*V(M1)*V(M2)
BIG   IG   0 V=0.00087163808*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0010044908*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.4p
CGK   G    K 4.2p
CAK   A    K 0.6p
.ENDS
