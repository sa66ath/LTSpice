*
* Generic triode model: 6JG6AT
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:47 2006
.SUBCKT 6JG6AT A G K
BGG   GG   0 V=V(G,K)+0.99372841
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.20443422*(URAMP(V(EP)-1e-10)+1e-10))^-2.1006356
BM2   M2   0 V=(0.41659311*(URAMP(V(GG)+V(EP)/2.8537634)+1e-10))^3.6006356
BP    P    0 V=0.0069256204*(URAMP(V(GG)+V(EP)/6.8502415)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.014050654*V(M1)*V(M2)
BIG   IG   0 V=0.0034628102*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0050333831*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 9.2p
CGK   G    K 12.8p
CAK   A    K 8.3p
.ENDS
