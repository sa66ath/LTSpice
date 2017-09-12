*
* Generic triode model: 6DE71
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:09 2006
.SUBCKT 6DE71 A G K
BGG   GG   0 V=V(G,K)+0.97660212
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.012940444*(URAMP(V(EP)-1e-10)+1e-10))^-0.39564264
BM2   M2   0 V=(0.79128838*(URAMP(V(GG)+V(EP)/16.128628)+1e-10))^1.8956426
BP    P    0 V=0.00091559181*(URAMP(V(GG)+V(EP)/20.382743)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.00054039164*V(M1)*V(M2)
BIG   IG   0 V=0.00045779591*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00052599563*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4p
CGK   G    K 2.2p
CAK   A    K 0.5p
.ENDS
