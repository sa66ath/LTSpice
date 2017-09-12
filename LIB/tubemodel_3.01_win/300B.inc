*
* Generic triode model: 300B
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:28 2006
.SUBCKT 300B A G K
BGG   GG   0 V=V(G,K)+0.99996017
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.038949013*(URAMP(V(EP)-1e-10)+1e-10))^-0.25159159
BM2   M2   0 V=(0.85636401*(URAMP(V(GG)+V(EP)/3.6877954)+1e-10))^1.7515916
BP    P    0 V=0.0011156138*(URAMP(V(GG)+V(EP)/4.3063409)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00071191966*V(M1)*V(M2)
BIG   IG   0 V=0.00055780691*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00096815606*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 15p
CGK   G    K 8.5p
CAK   A    K 4.1p
.ENDS
