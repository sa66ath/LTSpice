*
* Generic triode model: WE104D
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:24:00 2006
.SUBCKT WE104D A G K
BGG   GG   0 V=V(G,K)+-0.56998685
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.125122*(URAMP(V(EP)-1e-10)+1e-10))^-0.50749668
BM2   M2   0 V=(0.74719925*(URAMP(V(GG)+V(EP)/2.0204341)+1e-10))^2.0074967
BP    P    0 V=0.00015779238*(URAMP(V(GG)+V(EP)/2.7040098)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*9.1039243e-05*V(M1)*V(M2)
BIG   IG   0 V=7.8896192e-05*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00017408127*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.9p
CGK   G    K 4.1p
CAK   A    K 3.4p
.ENDS
