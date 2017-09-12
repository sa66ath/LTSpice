*
* Generic triode model: 6AN8PT
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:34 2006
.SUBCKT 6AN8PT A G K
BGG   GG   0 V=V(G,K)+-1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.024591513*(URAMP(V(EP)-1e-10)+1e-10))^-1.3002423
BM2   M2   0 V=(0.53566794*(URAMP(V(GG)+V(EP)/18.881801)+1e-10))^2.8002423
BP    P    0 V=0.0063199577*(URAMP(V(GG)+V(EP)/35.249078)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0052482203*V(M1)*V(M2)
BIG   IG   0 V=0.0031599788*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0034308188*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.8p
CGK   G    K 4.2p
CAK   A    K 2.4p
.ENDS
