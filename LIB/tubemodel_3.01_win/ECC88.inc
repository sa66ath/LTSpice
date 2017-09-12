*
* Generic triode model: ECC88
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:30 2006
.SUBCKT ECC88 A G K
BGG   GG   0 V=V(G,K)+0.34001426
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.009343174*(URAMP(V(EP)-1e-10)+1e-10))^-0.49661195
BM2   M2   0 V=(0.75127267*(URAMP(V(GG)+V(EP)/26.621288)+1e-10))^1.9966119
BP    P    0 V=0.007130155*(URAMP(V(GG)+V(EP)/35.434921)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0041180199*V(M1)*V(M2)
BIG   IG   0 V=0.0035650775*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0038690245*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.4p
CGK   G    K 3.3p
CAK   A    K 1.8p
.ENDS
