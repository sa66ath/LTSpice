*
* Generic triode model: 6CG7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:02 2006
.SUBCKT 6CG7 A G K
BGG   GG   0 V=V(G,K)+0.54900933
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.020494606*(URAMP(V(EP)-1e-10)+1e-10))^-0.76277031
BM2   M2   0 V=(0.66290422*(URAMP(V(GG)+V(EP)/16.448024)+1e-10))^2.2627703
BP    P    0 V=0.0012465111*(URAMP(V(GG)+V(EP)/24.812067)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00074417047*V(M1)*V(M2)
BIG   IG   0 V=0.0003834058*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0006816103*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4p
CGK   G    K 2.3p
CAK   A    K 2.2p
.ENDS
