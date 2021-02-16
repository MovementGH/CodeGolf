var Count=process.argv[2];
var Gates=process.argv[3];
var Vals=process.argv[4];
var Result=process.argv[5];
function calculate(buffer,char=0) {
    if(buffer[char]<51) return buffer[char];
    else return (buffer[char]=='a'||buffer[char]=='A')?(calculate(buffer,char*2+1)&calculate(buffer,char*2+2)):(calculate(buffer,char*2+1)|calculate(buffer,char*2+2))
}
function solve(char,string=Gates) {
    if(char<string.length) solve(char+1,string);
    else {
        if(calculate([...string,...Vals])==Result) {
            var changes=[]
            for(var i=0;i<string.length;i++) {
                if(string[i]!=Gates[i]) changes.push(i);
            }
            Solutions.push(changes);
        }
    }
    if(string[char]=='a'||string[char]=='o') {
        var arr=string.split('');
        arr[char]=string[char]=='a'?'o':'a';
        string=arr.join('');
        solve(char+1,string);
    }

}
var Solutions=[];
if(calculate([...Gates,...Vals])==Result) console.log('S');
else {
    solve(0);
    if(Solutions.length==0) console.log('I');
    else {
        var Smallest=Solutions[0].length;
        Solutions.map(s=>s.length<Smallest?Smallest=s.length:null);
        console.log(Solutions.filter(s=>s.length==Smallest).join(' '));
    }
}