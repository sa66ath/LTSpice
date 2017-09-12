*
* Generic triode model: 6SJ7T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:20 2006
.SUBCKT 6SJ7T A G K
BGG   GG   0 V=V(G,K)+0.40161932
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.02462593*(URAMP(V(EP)-1e-10)+1e-10))^-0.84287662
BM2   M2   0 V=(0.64023858*(URAMP(V(GG)+V(EP)/14.609049)+1e-10))^2.3428766
BP    P    0 V=0.0011655656*(URAMP(V(GG)+V(EP)/22.818133)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00071703729*V(M1)*V(M2)
BIG   IG   0 V=0.00068041382*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00044226898*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.4p
CGK   G    K 3.6p
CAK   A    K 7p
.ENDS
