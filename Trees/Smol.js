h='length',g=process.argv,a=g[3],b=g[4],c=g[5],d=[]
A=z=>{y=1,x=2,w=0,v=[[],[]];for(u=0;u<z[h];u++){if(!--x){if(w)y*=2;w=!w;x=y}v[+w].push(z[u])}return v}
B=(z,y)=>{y={d:z[0],c:[]};z=A(z.slice(1));if(z[0][h])y.c[0]=B(z[0],y.c[0]);if(z[1][h])y.c[1]=B(z[1],y.c[1]);return y}
C=z=>{if(z.c[0])C(z.c[0]),C(z.c[1]);z.v=+z.d;if(z.d=='o'||z.d=='O')z.v=z.c[0].v|z.c[1].v;if(z.d=='a'||z.d=='A')z.v=z.c[0].v&z.c[1].v;return z}
D=(z,y=a)=>{if(z<y[h])D(z+1,y);else if(C(B([...y,...b])).v==c)x=[],[...y].map((w,v)=>w!=a[v]?x.push(v):null),d.push(x);if(y[z]=='a'|y[z]=='o')x=y.split``,x[z]=x[z]=='a'?'o':'a',D(z+1,x.join``)}
D(0);if(d[h]==0)e='I';else f=d[0][h],d.map(z=>z[h]<f?f=z[h]:null),e=f?d.filter(z=>z[h]==f).join` `:'S'
console.log(e);