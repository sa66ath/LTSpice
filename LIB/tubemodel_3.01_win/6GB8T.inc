*
* Generic triode model: 6GB8T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:38 2006
.SUBCKT 6GB8T A G K
BGG   GG   0 V=V(G,K)+0.18361766
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.023367579*(URAMP(V(EP)-1e-10)+1e-10))^-0.5778846
BM2   M2   0 V=(0.72188802*(URAMP(V(GG)+V(EP)/11.901617)+1e-10))^2.0778846
BP    P    0 V=0.0065222813*(URAMP(V(GG)+V(EP)/16.486791)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0037584671*V(M1)*V(M2)
BIG   IG   0 V=0.0032611407*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0038634597*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 10.8p
CGK   G    K 13.4p
CAK   A    K 16.3p
.ENDS
