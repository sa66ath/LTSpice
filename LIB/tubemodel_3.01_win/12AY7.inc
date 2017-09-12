*
* Generic triode model: 12AY7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:37 2006
.SUBCKT 12AY7 A G K
BGG   GG   0 V=V(G,K)+0.71171435
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0094119714*(URAMP(V(EP)-1e-10)+1e-10))^-0.68363668
BM2   M2   0 V=(0.68692746*(URAMP(V(GG)+V(EP)/33.263227)+1e-10))^2.1836367
BP    P    0 V=0.00092634255*(URAMP(V(GG)+V(EP)/48.423202)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00054133951*V(M1)*V(M2)
BIG   IG   0 V=0.00046317128*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00049201413*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.3p
CGK   G    K 1.3p
CAK   A    K 0.6p
.ENDS
