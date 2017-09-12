*
* Generic triode model: 5842
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:43 2006
.SUBCKT 5842 A G K
BGG   GG   0 V=V(G,K)+-0.46951652
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0042897418*(URAMP(V(EP)-1e-10)+1e-10))^-0.30633316
BM2   M2   0 V=(0.83041159*(URAMP(V(GG)+V(EP)/39.533476)+1e-10))^1.8063332
BP    P    0 V=0.017297881*(URAMP(V(GG)+V(EP)/47.607086)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.010632968*V(M1)*V(M2)
BIG   IG   0 V=0.0086489406*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0091968129*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.8p
CGK   G    K 9p
CAK   A    K 0.5p
.ENDS
