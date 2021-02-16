#include<iostream>
#include<string>
#define a(z,y,x) for(int z=0;z<y;z++){x;}
int main(int A,char**B) {
    int D=strlen(B[1]),T=strlen(B[2]),E[D],F=0,G=0,K[T];char H[D];std::string I[T],S;
    a(J,D,bool C=0;a(L,F,if(H[L]==B[1][J])C=1)if(!C)H[F++]=B[1][J];)a(J,T,B[2][J]-32?(I[G]+=B[2][J],0):G++)G++;a(J,G,K[J]=-1)
    for(int J=0;J<F;J++) {
        int L=0,M[G],N=0,O;bool P=1;for(int Q=0;B[1][Q]!=H[J];Q++)L+=E[Q];a(Q,G,if(I[Q]==I[L])M[N++]=Q)
        for(O=1;P;O++){int S=0;a(Q,N,if(I[L+O]!=I[M[Q]+O]|K[M[Q]+O]>-1)P=0)a(Q,G,if(I[L+O]==I[Q])S++)if(S>N|K[L+O]!=-1)P=0;}O--;
        a(Q,N,a(R,O,K[M[Q]+R]=J))a(Q,D,if(B[1][Q]==H[J])E[Q]=O)
        S="";a(Q,O,S+=I[L+Q]+" ")std::cout<<H[J]<<" = "<<S<<"\n";
    }
}
