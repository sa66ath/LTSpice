*
* Generic triode model: 6GW8PT
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:41 2006
.SUBCKT 6GW8PT A G K
BGG   GG   0 V=V(G,K)+0.84112562
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.01029284*(URAMP(V(EP)-1e-10)+1e-10))^-0.37211195
BM2   M2   0 V=(0.80123413*(URAMP(V(GG)+V(EP)/19.311081)+1e-10))^1.872112
BP    P    0 V=0.0043151181*(URAMP(V(GG)+V(EP)/24.10167)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0025686773*V(M1)*V(M2)
BIG   IG   0 V=0.0021575591*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.002428883*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 4.2p
CGK   G    K 5.8p
CAK   A    K 7.6p
.ENDS
