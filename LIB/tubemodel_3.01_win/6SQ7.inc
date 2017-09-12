*
* Generic triode model: 6SQ7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:25 2006
.SUBCKT 6SQ7 A G K
BGG   GG   0 V=V(G,K)+0.73774817
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0014361986*(URAMP(V(EP)-1e-10)+1e-10))^-0.21629832
BM2   M2   0 V=(0.87397393*(URAMP(V(GG)+V(EP)/87.749749)+1e-10))^1.7162983
BP    P    0 V=0.00075255807*(URAMP(V(GG)+V(EP)/100.40316)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00049502244*V(M1)*V(M2)
BIG   IG   0 V=0.00037627904*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00038755003*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.7p
CGK   G    K 1.7p
CAK   A    K 3.8p
.ENDS
