*
* Generic triode model: 12AX7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:36 2006
.SUBCKT 12AX7 A G K
BGG   GG   0 V=V(G,K)+0.59836683
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0017172334*(URAMP(V(EP)-1e-10)+1e-10))^-0.2685074
BM2   M2   0 V=(0.84817287*(URAMP(V(GG)+V(EP)/88.413802)+1e-10))^1.7685074
BP    P    0 V=0.001130216*(URAMP(V(GG)+V(EP)/104.24031)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00071211506*V(M1)*V(M2)
BIG   IG   0 V=0.000565108*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00058141055*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.7p
CGK   G    K 1.6p
CAK   A    K 0.5p
.ENDS
