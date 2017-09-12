*
* Generic triode model: 71A
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:19 2006
.SUBCKT 71A A G K
BGG   GG   0 V=V(G,K)+-0.99999999
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.058225528*(URAMP(V(EP)-1e-10)+1e-10))^-0.29538374
BM2   M2   0 V=(0.83547598*(URAMP(V(GG)+V(EP)/2.8256337)+1e-10))^1.7953837
BP    P    0 V=0.00034434696*(URAMP(V(GG)+V(EP)/3.3820645)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00021307994*V(M1)*V(M2)
BIG   IG   0 V=0.00017217348*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00033568367*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 7.5p
CGK   G    K 3.2p
CAK   A    K 2.9p
.ENDS
