*
* Generic triode model: ECC84
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:28 2006
.SUBCKT ECC84 A G K
BGG   GG   0 V=V(G,K)+0.84230976
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.028730107*(URAMP(V(EP)-1e-10)+1e-10))^-1.1882664
BM2   M2   0 V=(0.55798041*(URAMP(V(GG)+V(EP)/15.38524)+1e-10))^2.6882664
BP    P    0 V=0.0027771882*(URAMP(V(GG)+V(EP)/27.573083)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0021056179*V(M1)*V(M2)
BIG   IG   0 V=0.0013885941*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0015410372*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.3p
CGK   G    K 4.7p
CAK   A    K 0.4p
.ENDS
