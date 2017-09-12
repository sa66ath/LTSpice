*
* Generic triode model: EF39T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:27:23 2006
.SUBCKT EF39T A G K
BGG   GG   0 V=V(G,K)+0.00099090005
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.44634244*(URAMP(V(EP)-1e-10)+1e-10))^-13.640171
BM2   M2   0 V=(0.099074175*(URAMP(V(GG)+V(EP)/2.0184633)+1e-10))^15.140171
BP    P    0 V=0.0016067851*(URAMP(V(GG)+V(EP)/20.373254)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*19194638000*V(M1)*V(M2)
BIG   IG   0 V=0.00080339255*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00092313363*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 16.5p
CGK   G    K 23.5p
CAK   A    K 15.2p
.ENDS
