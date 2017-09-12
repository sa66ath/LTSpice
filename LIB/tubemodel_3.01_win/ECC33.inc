*
* Generic triode model: ECC33
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:23 2006
.SUBCKT ECC33 A G K
BGG   GG   0 V=V(G,K)+0.39854224
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.00456874*(URAMP(V(EP)-1e-10)+1e-10))^-0.2251333
BM2   M2   0 V=(0.86949802*(URAMP(V(GG)+V(EP)/28.564106)+1e-10))^1.7251333
BP    P    0 V=0.001087821*(URAMP(V(GG)+V(EP)/32.85126)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00070978374*V(M1)*V(M2)
BIG   IG   0 V=0.00054391049*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00059395688*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.5p
CGK   G    K 3.5p
CAK   A    K 1.5p
.ENDS
