*
* Generic triode model: 6JE6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:46 2006
.SUBCKT 6JE6T A G K
BGG   GG   0 V=V(G,K)+1
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.15531724*(URAMP(V(EP)-1e-10)+1e-10))^-0.92957636
BM2   M2   0 V=(0.61739159*(URAMP(V(GG)+V(EP)/2.4633995)+1e-10))^2.4295764
BP    P    0 V=0.0036485186*(URAMP(V(GG)+V(EP)/3.9900115)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0023385402*V(M1)*V(M2)
BIG   IG   0 V=0.0018242593*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0032785303*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 9.1p
CGK   G    K 12.9p
CAK   A    K 10.5p
.ENDS
