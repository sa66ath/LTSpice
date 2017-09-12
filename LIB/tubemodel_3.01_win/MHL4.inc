*
* Generic triode model: MHL4
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:51 2006
.SUBCKT MHL4 A G K
BGG   GG   0 V=V(G,K)+0.4016137
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.017679176*(URAMP(V(EP)-1e-10)+1e-10))^-0.56606943
BM2   M2   0 V=(0.72601626*(URAMP(V(GG)+V(EP)/15.49754)+1e-10))^2.0660694
BP    P    0 V=0.00078960956*(URAMP(V(GG)+V(EP)/21.345996)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00045482006*V(M1)*V(M2)
BIG   IG   0 V=0.00039480478*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00045093613*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 3.9p
CGK   G    K 5.4p
CAK   A    K 4.5p
.ENDS
