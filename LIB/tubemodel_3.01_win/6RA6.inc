*
* Generic triode model: 6RA6
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:11 2006
.SUBCKT 6RA6 A G K
BGG   GG   0 V=V(G,K)+-0.45045978
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.022786797*(URAMP(V(EP)-1e-10)+1e-10))^-0.63709179
BM2   M2   0 V=(0.70188843*(URAMP(V(GG)+V(EP)/13.082645)+1e-10))^2.1370918
BP    P    0 V=0.005552851*(URAMP(V(GG)+V(EP)/18.639209)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0032180177*V(M1)*V(M2)
BIG   IG   0 V=0.0027764255*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0032292352*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 6.5p
CGK   G    K 5p
CAK   A    K 1.2p
.ENDS
