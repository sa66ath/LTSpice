*
* Generic triode model: 6CB5T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:58 2006
.SUBCKT 6CB5T A G K
BGG   GG   0 V=V(G,K)+0.12233722
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.099225459*(URAMP(V(EP)-1e-10)+1e-10))^-0.68051603
BM2   M2   0 V=(0.68791056*(URAMP(V(GG)+V(EP)/3.1452557)+1e-10))^2.180516
BP    P    0 V=0.0027158296*(URAMP(V(GG)+V(EP)/4.572187)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0015860374*V(M1)*V(M2)
BIG   IG   0 V=0.0013579148*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0022959718*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 9p
CGK   G    K 13p
CAK   A    K 9.6p
.ENDS
