*
* Generic triode model: MH40
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:48 2006
.SUBCKT MH40 A G K
BGG   GG   0 V=V(G,K)+0.39906513
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.011821777*(URAMP(V(EP)-1e-10)+1e-10))^-0.91482169
BM2   M2   0 V=(0.62116387*(URAMP(V(GG)+V(EP)/32.045617)+1e-10))^2.4148217
BP    P    0 V=0.0012108021*(URAMP(V(GG)+V(EP)/51.589634)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00077021291*V(M1)*V(M2)
BIG   IG   0 V=0.00060540103*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00064077588*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 7.3p
CGK   G    K 6p
CAK   A    K 4p
.ENDS
