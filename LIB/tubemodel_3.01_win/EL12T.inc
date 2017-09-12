*
* Generic triode model: EL12T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:32 2006
.SUBCKT EL12T A G K
BGG   GG   0 V=V(G,K)+0.99999993
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.014506242*(URAMP(V(EP)-1e-10)+1e-10))^-0.43509457
BM2   M2   0 V=(0.77515592*(URAMP(V(GG)+V(EP)/15.499816)+1e-10))^1.9350946
BP    P    0 V=0.0044414767*(URAMP(V(GG)+V(EP)/19.99574)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0025921537*V(M1)*V(M2)
BIG   IG   0 V=0.0022207383*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0025580516*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.4p
CGK   G    K 5.7p
CAK   A    K 5.9p
.ENDS
