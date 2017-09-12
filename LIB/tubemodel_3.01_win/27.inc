*
* Generic triode model: 27
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:58 2006
.SUBCKT 27 A G K
BGG   GG   0 V=V(G,K)+0.99999994
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.041269212*(URAMP(V(EP)-1e-10)+1e-10))^-0.69845105
BM2   M2   0 V=(0.68229856*(URAMP(V(GG)+V(EP)/7.6982676)+1e-10))^2.1984511
BP    P    0 V=0.00036339312*(URAMP(V(GG)+V(EP)/11.282843)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00021306994*V(M1)*V(M2)
BIG   IG   0 V=0.00018169656*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00023106309*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 3.3p
CGK   G    K 3.1p
CAK   A    K 2.3p
.ENDS
