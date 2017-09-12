*
* Generic triode model: 6AN8T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:19:32 2006
.SUBCKT 6AN8T A G K
BGG   GG   0 V=V(G,K)+0.60043597
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.041145821*(URAMP(V(EP)-1e-10)+1e-10))^-1.4559246
BM2   M2   0 V=(0.50745543*(URAMP(V(GG)+V(EP)/11.970707)+1e-10))^2.9559246
BP    P    0 V=0.0016328391*(URAMP(V(GG)+V(EP)/23.589672)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0015634562*V(M1)*V(M2)
BIG   IG   0 V=0.00081641955*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.00092133983*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 1.5p
CGK   G    K 2p
CAK   A    K 0.3p
.ENDS
