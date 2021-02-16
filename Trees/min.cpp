#import<bits/stdc++.h>
#define W int
#define Z(y,x) for(W y=0;y<x;y++)
#define Y std::cout<<
W a,b,*c[999],e=999,f,x;std::string d,g;W A(W y){return g[y]<51?g[y]:g[y]>'a'|g[y++]=='O'?A(y*2-1)|A(y*2):A(y*2-1)&A(y*2);}W B(W z,std::string y){if(z>=f){if(g=y,A(0)==a){x=0,c[b]=new W[f];Z(w,f)y[w]-d[w]?c[b][++x]=w:0;*c[b++]=x,e=e<x?e:x;}}else{B(z+1,y);if(y[z]>96)y[z]^=14,B(z+1,y);}}main(W w,char**v){d=v[2];d+=v[3];a=*v[4];f=d.size();B(0,d);if(!b)Y'I';if(e)Z(y,b)Z(x,*c[y]&&*c[y]==e&&Y(x?',':' '))Y(c[y][x+1]);else Y'S'; }