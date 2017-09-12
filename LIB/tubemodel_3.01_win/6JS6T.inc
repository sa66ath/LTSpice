*
* Generic triode model: 6JS6T
* Copyright 2003--2006 by Ayumi Nakabayashi, All rights reserved.
* Version 3.01, Generated on Wed Mar 22 17:20:48 2006
.SUBCKT 6JS6T A G K
BGG   GG   0 V=V(G,K)+0.9999936
BEP   EP   0 V=URAMP(V(A,K))+1e-10
BEG   EG   0 V=URAMP(V(G,K))+1e-10
BM1   M1   0 V=(0.21913245*(URAMP(V(EP)-1e-10)+1e-10))^-1.3747601
BM2   M2   0 V=(0.52178267*(URAMP(V(GG)+V(EP)/2.1823209)+1e-10))^2.8747601
BP    P    0 V=0.0035536558*(URAMP(V(GG)+V(EP)/4.1824327)+1e-10)^1.5
BIK   IK   0 V=U(V(GG))*V(P)+(1-U(V(GG)))*0.0031522524*V(M1)*V(M2)
BIG   IG   0 V=0.0017768279*V(EG)^1.5*(V(EG)/(V(EP)+V(EG))*1.2+0.4)
BIAK  A    K I=URAMP(V(IK,IG)-URAMP(V(IK,IG)-(0.0031247106*V(EP)^1.5)))+1e-10*V(A,K)
BIGK  G    K I=V(IG)
* CAPS
CGA   G    A 10p
CGK   G    K 14p
CAK   A    K 9.3p
.ENDS
