#import<bits/stdc++.h>

main() {
    wchar_t* Input;
    std::wcin>>Input;

    for(int i=0;i<wstrlen(Input);i++)
        std::wcout<<Input[i]<<std::endl;

}


/*
Size=process.argv[2];
Rotation=process.argv[3];
Input=[...process.argv[4]]
Art=[]
Map='─│ ━┃ ┄┆ ┅┇ ┈┊ ┉┋ ┌┐┘└ ┍┒┙┖ ┎┑┚┕ ┏┓┛┗ ├┬┤┴ ┝┰┥┸ ┞┮┧┵ ┟┭┦┶ ┠┯┨┷ ┡┲┪┹ ┢┱┩┺ ┣┳┫┻ ┽╀┾╁ ┿╂ ╃╄╆╅ ╇╊╈╉ ╌╎ ╍╏ ═║ ╒╖╛╙ ╓╕╜╘ ╔╗╝╚ ╞╥╡╨ ╟╤╢╧ ╠╦╣╩ ╪╫ ╬ ╭╮╯╰ ╱╲ ╳ ╴╵╶╷ ╸╹╺╻ ╼╽╾╿';
RotateChar=(Char)=>{
    var Index=Map.indexOf(Char);
    return Index==-1?Char:Map[Map[Index+1]==' '?Map.match('\\S+'+Char).index:Index+1];
}
while(Input.length)Art.push(Input.splice(0,Size))
while(Rotation%360>0)Art=Art.map((row,i)=>row.map((val, j)=>RotateChar(Art[Art.length-1-j][i]))),Rotation-=90

console.log(Art.map(a=>a.join``).join``)*/