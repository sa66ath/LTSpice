*
* Generic triode model: 6EM71
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:19 2006
.SUBCKT 6EM71 A G K
BGG   GG   0 V=V(G,K)+0.75136004
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.00038946438*(URAMP(V(EP)-1e-10)+1e-10))^-0.038461538
BM2   M2   0 V=(0.975*(URAMP(V(GG)+V(EP)/64.190723)+1e-10))^1.5384615
BP    P    0 V=0.00085260112*(URAMP(V(GG)+V(EP)/65.836639)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00074054441*V(M1)*V(M2)
BIG   IG   0 V=0.00042630056*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00044579952*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.8p
CGK   G    K 2.2p
CAK   A    K 0.6p
.ENDS
