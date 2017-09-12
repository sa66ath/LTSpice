*
* Generic triode model: 211
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:27 2006
.SUBCKT 211 A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0021297199*(URAMP(V(EP)-1e-10)+1e-10))^-0.038461562
BM2   M2   0 V=(0.97499998*(URAMP(V(GG)+V(EP)/11.73864)+1e-10))^1.5384616
BP    P    0 V=0.00045306372*(URAMP(V(GG)+V(EP)/12.039631)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00039351788*V(M1)*V(M2)
BIG   IG   0 V=0.00011014965*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00041468102*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 14p
CGK   G    K 5.4p
CAK   A    K 4.8p
.ENDS
