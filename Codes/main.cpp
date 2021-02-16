#include<iostream>
#include<string>
#define a(z,y,x) for(int z=0;z<y;z++){x;}
int main(int A,char**B) {
    int C=strlen(B[1]),D=strlen(B[2]),E=0,L=0,M[C],N,O,Q,G[D];std::string H[D],I;a(J,D,G[J]=-1;B[2][J]-32?(H[E]+=B[2][J],0):E++)E++;
    for(int K=0;K<C;K++){
        N=0;a(J,D,H[L]==H[J]?M[N++]=J:0)
        for(bool P=O=1;P;O++){a(J,N,H[L+O]!=H[M[J]+O]|(G[M[J]+O]!=G[M[J]])?P=0:Q=0)a(J,E,Q+=H[L+O]==H[J])if(Q>N|L+O>E)P=0;}O--;
        I="";a(J,O,I+=H[L+J]+" ")if(G[L]==-1)std::cout<<B[1][K]<<" = "+I+"\n";
        L+=O;a(J,N,a(R,O,G[M[J]+R]=K))
    }
}
