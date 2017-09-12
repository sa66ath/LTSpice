*
* Generic triode model: 6AU6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:37 2006
.SUBCKT 6AU6T A G K
BGG   GG   0 V=V(G,K)+0.24107953
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.014176045*(URAMP(V(EP)-1e-10)+1e-10))^-0.93570358
BM2   M2   0 V=(0.61583848*(URAMP(V(GG)+V(EP)/27.099343)+1e-10))^2.4357036
BP    P    0 V=0.0032162308*(URAMP(V(GG)+V(EP)/44.003978)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0020681021*V(M1)*V(M2)
BIG   IG   0 V=0.0016081154*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0017183702*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 2.2p
CGK   G    K 3.3p
CAK   A    K 5p
.ENDS
