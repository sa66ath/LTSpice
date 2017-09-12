*
* Generic triode model: 6V6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:30 2006
.SUBCKT 6V6T A G K
BGG   GG   0 V=V(G,K)+0.99999998
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.048335289*(URAMP(V(EP)-1e-10)+1e-10))^-0.77023894
BM2   M2   0 V=(0.6607234*(URAMP(V(GG)+V(EP)/7.0192317)+1e-10))^2.2702389
BP    P    0 V=0.0010053341*(URAMP(V(GG)+V(EP)/10.623555)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00060166202*V(M1)*V(M2)
BIG   IG   0 V=0.00051429562*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00061491868*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4p
CGK   G    K 5p
CAK   A    K 6.9p
.ENDS
