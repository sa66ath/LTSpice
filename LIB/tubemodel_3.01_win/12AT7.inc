*
* Generic triode model: 12AT7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:34 2006
.SUBCKT 12AT7 A G K
BGG   GG   0 V=V(G,K)+0.67585931
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.015420581*(URAMP(V(EP)-1e-10)+1e-10))^-1.768756
BM2   M2   0 V=(0.45889017*(URAMP(V(GG)+V(EP)/35.090106)+1e-10))^3.268756
BP    P    0 V=0.0031809222*(URAMP(V(GG)+V(EP)/76.46733)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0042575005*V(M1)*V(M2)
BIG   IG   0 V=0.0015904611*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0016530623*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.5p
CGK   G    K 2.2p
CAK   A    K 0.5p
.ENDS
