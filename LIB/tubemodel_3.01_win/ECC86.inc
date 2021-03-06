*
* Generic triode model: ECC86
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:27 2006
.SUBCKT ECC86 A G K
BGG   GG   0 V=V(G,K)+0.38539466
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.057387275*(URAMP(V(EP)-1e-10)+1e-10))^-1.5833861
BM2   M2   0 V=(0.48647815*(URAMP(V(GG)+V(EP)/8.9483573)+1e-10))^3.0833861
BP    P    0 V=0.0043259684*(URAMP(V(GG)+V(EP)/18.394161)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.004712875*V(M1)*V(M2)
BIG   IG   0 V=0.0021629842*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0025205087*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.3p
CGK   G    K 3p
CAK   A    K 1.8p
.ENDS
