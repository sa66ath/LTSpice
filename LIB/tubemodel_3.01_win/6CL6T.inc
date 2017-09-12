*
* Generic triode model: 6CL6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:05 2006
.SUBCKT 6CL6T A G K
BGG   GG   0 V=V(G,K)+0.23313833
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.023688975*(URAMP(V(EP)-1e-10)+1e-10))^-0.93652529
BM2   M2   0 V=(0.6156308*(URAMP(V(GG)+V(EP)/16.225658)+1e-10))^2.4365253
BP    P    0 V=0.0060982027*(URAMP(V(GG)+V(EP)/26.356151)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0039229723*V(M1)*V(M2)
BIG   IG   0 V=0.0030491014*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0033994382*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.5p
CGK   G    K 6.5p
CAK   A    K 5.4p
.ENDS
