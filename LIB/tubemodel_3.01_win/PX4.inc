*
* Generic triode model: PX4
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:55 2006
.SUBCKT PX4 A G K
BGG   GG   0 V=V(G,K)+-0.81287548
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.047093515*(URAMP(V(EP)-1e-10)+1e-10))^-0.41642857
BM2   M2   0 V=(0.78270593*(URAMP(V(GG)+V(EP)/4.6140976)+1e-10))^1.9164286
BP    P    0 V=0.0010767826*(URAMP(V(GG)+V(EP)/5.895059)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.000631487*V(M1)*V(M2)
BIG   IG   0 V=0.00053839132*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00082368923*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 13.7p
CGK   G    K 7.7p
CAK   A    K 3.9p
.ENDS
