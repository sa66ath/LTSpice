*
* Generic triode model: 12BH7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:41 2006
.SUBCKT 12BH7 A G K
BGG   GG   0 V=V(G,K)+0.99999999
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.044635144*(URAMP(V(EP)-1e-10)+1e-10))^-1.6555735
BM2   M2   0 V=(0.47534941*(URAMP(V(GG)+V(EP)/11.754204)+1e-10))^3.1555735
BP    P    0 V=0.0021126435*(URAMP(V(GG)+V(EP)/24.727503)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0024875937*V(M1)*V(M2)
BIG   IG   0 V=0.00112*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00112*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.6p
CGK   G    K 3.2p
CAK   A    K 0.5p
.ENDS
