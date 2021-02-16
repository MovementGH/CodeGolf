A=(z,i=0)=>z[i]^z[i+1]?(z[++i]?A(z,i):z):(z.splice(i,2,z[i]*2),A(z))
console.log(...A([...a=process.argv[2].split` `]),'\n',...A(a.reverse()).reverse())