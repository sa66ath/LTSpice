*
* Generic triode model: 31LZ6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:48 2006
.SUBCKT 31LZ6T A G K
BGG   GG   0 V=V(G,K)+-0.11976616
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.21025804*(URAMP(V(EP)-1e-10)+1e-10))^-1.445676
BM2   M2   0 V=(0.50922098*(URAMP(V(GG)+V(EP)/2.3341748)+1e-10))^2.945676
BP    P    0 V=0.0061264796*(URAMP(V(GG)+V(EP)/4.5838151)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0058083241*V(M1)*V(M2)
BIG   IG   0 V=0.0030632398*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0051737191*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 9.2p
CGK   G    K 12.9p
CAK   A    K 10.4p
.ENDS
