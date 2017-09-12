*
* Generic triode model: MH4
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:23:47 2006
.SUBCKT MH4 A G K
BGG   GG   0 V=V(G,K)+0.58255619
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.0059036471*(URAMP(V(EP)-1e-10)+1e-10))^-0.42275823
BM2   M2   0 V=(0.78012929*(URAMP(V(GG)+V(EP)/37.243201)+1e-10))^1.9227582
BP    P    0 V=0.017484357*(URAMP(V(GG)+V(EP)/47.739781)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.010236064*V(M1)*V(M2)
BIG   IG   0 V=0.0087421787*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00929441*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 5.7p
CGK   G    K 7p
CAK   A    K 6.5p
.ENDS
