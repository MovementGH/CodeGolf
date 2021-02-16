A=z=>{for(i=0;y=z[i+1];z[i]^y?i++:z.splice(i--,2,y*2));console.log(...(x?z:z.reverse()))}
A([...a=x=process.argv[2].split` `]),A(a.reverse(x=0))