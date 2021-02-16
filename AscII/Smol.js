a=process.argv,b=a[3],c=[...a[4]],e='─│ ━┃ ┄┆ ┅┇ ┈┊ ┉┋ ┌┐┘└ ┍┒┙┖ ┎┑┚┕ ┏┓┛┗ ├┬┤┴ ┝┰┥┸ ┞┮┧┵ ┟┭┦┶ ┠┯┨┷ ┡┲┪┹ ┢┱┩┺ ┣┳┫┻ ┽╀┾╁ ┿╂ ╃╄╆╅ ╇╊╈╉ ╌╎ ╍╏ ═║ ╒╖╛╙ ╓╕╜╘ ╔╗╝╚ ╞╥╡╨ ╟╤╢╧ ╠╦╣╩ ╪╫ ╭╮╯╰ ╱╲ ╴╵╶╷ ╸╹╺╻ ╼╽╾╿'
A=z=>(y=e.indexOf(z),y<0?z:e[e[y+1]==' '?e.match('\\S+'+z).index:y+1])
for(d=c.map(z=>c.splice(0,a[2])).filter(z=>z);b%360;b-=90)d=d.map((f,g)=>f.map((h,i)=>A(d[d.length-1-i][g])))
console.log(d.map(j=>j.join``).join``)