*
* Generic triode model: 6240G
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:55 2006
.SUBCKT 6240G A G K
BGG   GG   0 V=V(G,K)+0.72455622
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.00866647*(URAMP(V(EP)-1e-10)+1e-10))^-0.48282918
BM2   M2   0 V=(0.75649482*(URAMP(V(GG)+V(EP)/28.097389)+1e-10))^1.9828292
BP    P    0 V=0.0013034573*(URAMP(V(GG)+V(EP)/37.141548)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00075405166*V(M1)*V(M2)
BIG   IG   0 V=0.00065172867*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0007047229*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.6p
CGK   G    K 3.2p
CAK   A    K 1.2p
.ENDS
