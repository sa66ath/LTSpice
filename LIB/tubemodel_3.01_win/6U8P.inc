*
* Generic pentode model: 6U8P
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:21:28 2006
.SUBCKT 6U8P A G2 G1 K
BGG   GG   0 V=V(G1,K)+0.65071871
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G1,K))+1e-10
BEG2  EG2  0 V=URAMP(V(G2,K))+1e-10
BM1   M1   0 V=(0.046006989*(URAMP(V(EG2)-1e-10)+1e-10))^-2.7651713
BM2   M2   0 V=(0.35168575*(URAMP(V(GG)+V(EG2)/14.091647)+1e-10))^4.2651713
BP    P    0 V=0.003445744*(URAMP(V(GG)+V(EG2)/40.068859)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.018698107*V(M1)*V(M2)
BIG   IG   0 V=0.001722872*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIK2  IK2  0 V=V(IK,IG)*(1-0.4*(EXP(-V(EP)/V(EG2)*15)-EXP(-15)))
BIG2T IG2T 0 V=V(IK2)*(0.74580496*(1-V(EP)/(V(EP)+10))^1.5+0.25419504)
BIK3  IK3  0 V=V(IK2)*(V(EP)+6302.5)/(V(EG2)+6302.5)
BIK4  IK4  0 V=V(IK3)-URAMP(V(IK3)-(0.0018526668*(V(EP)+URAMP(V(EG2,EP)))^1.5))
BIP   IP   0 V=URAMP(V(IK4,IG2T)-URAMP(V(IK4,IG2T)-(0.0018526668*V(EP)^1.5)))
BIAK  A    K I=V(IP)+1e-10*V(A,K)
BIG2  G2   K I=URAMP(V(IK4,IP))
BIGK  G1   K I=V(IG)
* CAPS
CGA   G1  A  0.007p
CGK   G1  K  3p
C12   G1  G2 2p
CAK   A   K  3.5p
.ENDS
