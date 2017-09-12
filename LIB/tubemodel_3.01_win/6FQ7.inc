*
* Generic triode model: 6FQ7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:32 2006
.SUBCKT 6FQ7 A G K
BGG   GG   0 V=V(G,K)+0.78479196
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.019086702*(URAMP(V(EP)-1e-10)+1e-10))^-0.69767797
BM2   M2   0 V=(0.68253858*(URAMP(V(GG)+V(EP)/16.632597)+1e-10))^2.197678
BP    P    0 V=0.0010973242*(URAMP(V(GG)+V(EP)/24.368728)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00064328217*V(M1)*V(M2)
BIG   IG   0 V=0.00054866211*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00061689541*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 3.8p
CGK   G    K 2.4p
CAK   A    K 0.3p
.ENDS
