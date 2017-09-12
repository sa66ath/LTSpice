*
* Generic triode model: 6BX7
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:49 2006
.SUBCKT 6BX7 A G K
BGG   GG   0 V=V(G,K)+0.99999999
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.044756942*(URAMP(V(EP)-1e-10)+1e-10))^-0.87869992
BM2   M2   0 V=(0.63059657*(URAMP(V(GG)+V(EP)/8.253545)+1e-10))^2.3786999
BP    P    0 V=0.0032697035*(URAMP(V(GG)+V(EP)/13.088471)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0020437592*V(M1)*V(M2)
BIG   IG   0 V=0.0016348517*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0020166439*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.2p
CGK   G    K 4.8p
CAK   A    K 1.2p
.ENDS
