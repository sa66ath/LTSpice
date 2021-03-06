*
* Generic triode model: 6U8PT
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:28 2006
.SUBCKT 6U8PT A G K
BGG   GG   0 V=V(G,K)+0.65071871
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.046006989*(URAMP(V(EP)-1e-10)+1e-10))^-2.7651713
BM2   M2   0 V=(0.35168575*(URAMP(V(GG)+V(EP)/14.091647)+1e-10))^4.2651713
BP    P    0 V=0.003445744*(URAMP(V(GG)+V(EP)/40.068859)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.018698107*V(M1)*V(M2)
BIG   IG   0 V=0.001722872*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0018526668*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2p
CGK   G    K 3p
CAK   A    K 3.5p
.ENDS
