#import<bits/stdc++.h>
#define b std::cout<<
#define c int
#define f(x,y,z) for(c x=0;x<y;x++){z;}
c C,D,G,H,*A;c n(c z){f(K,4&&H-z,A[z]=A[z]%2*16+A[z]>>1;n(z+1);G=1;f(J,C,f(K,D+1,c*L=A+J*D+K;G=(D-K?J?(*L^L[-D]>>2)%2:*L%2:0)|(K?((D-K?*L:0)>>2^L[-1])&2:*L&8)?0:G))if(G)return 1)}main(c Z,char**E){A=new c[Z=strlen(E[1])];f(F,Z,((G=E[1][F])>45?G<60?A[H]=A[H]*10+G-49:G-91?H:C:(H++,D))++)D/=C-1;D++;H--;if(n(0))f(I,H,b(I%D?",":I?"][":"[[")<<A[I])n(0)?b"]]":b"-1";}