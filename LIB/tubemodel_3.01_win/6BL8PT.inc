*
* Generic triode model: 6BL8PT
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:41 2006
.SUBCKT 6BL8PT A G K
BGG   GG   0 V=V(G,K)+0.57453871
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0091087169*(URAMP(V(EP)-1e-10)+1e-10))^-0.67124576
BM2   M2   0 V=(0.69084764*(URAMP(V(GG)+V(EP)/33.940276)+1e-10))^2.1712458
BP    P    0 V=0.0040028722*(URAMP(V(GG)+V(EP)/49.128454)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0023332764*V(M1)*V(M2)
BIG   IG   0 V=0.0020014361*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0021242724*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.1p
CGK   G    K 3.1p
CAK   A    K 3.4p
.ENDS
