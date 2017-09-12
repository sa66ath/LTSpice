*
* Generic triode model: 6CK4
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:04 2006
.SUBCKT 6CK4 A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.065687609*(URAMP(V(EP)-1e-10)+1e-10))^-0.93132007
BM2   M2   0 V=(0.6169488*(URAMP(V(GG)+V(EP)/5.8314073)+1e-10))^2.4313201
BP    P    0 V=0.0032983716*(URAMP(V(GG)+V(EP)/9.4520117)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0021160382*V(M1)*V(M2)
BIG   IG   0 V=0.0014546477*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0020871033*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 6.5p
CGK   G    K 8p
CAK   A    K 1.8p
.ENDS
