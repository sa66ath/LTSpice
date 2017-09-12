*
* Generic triode model: 6197T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:22:53 2006
.SUBCKT 6197T A G K
BGG   GG   0 V=V(G,K)+0.45955375
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.014421851*(URAMP(V(EP)-1e-10)+1e-10))^-0.5339196
BM2   M2   0 V=(0.73749228*(URAMP(V(GG)+V(EP)/18.202083)+1e-10))^2.0339196
BP    P    0 V=0.0053217435*(URAMP(V(GG)+V(EP)/24.681049)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0030656981*V(M1)*V(M2)
BIG   IG   0 V=0.0026608717*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.002987557*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.7p
CGK   G    K 6.9p
CAK   A    K 5p
.ENDS
