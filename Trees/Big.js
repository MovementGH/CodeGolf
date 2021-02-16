var Count=process.argv[2];
var Gates=process.argv[3];
var Vals=process.argv[4];
var Result=process.argv[5];

function split(buffer) {
    var count=1,more=2,b=0;
    var r=[[],[]];
    for(var i=0;i<buffer.length;i++) {
        if(!(--more)) {
            b=!b;
            if(!b) count*=2;
            more=count;
        }
        r[+b].push(buffer[i]);
    }
    return r;
}

function construct(tree,buffer) {
    tree={data:buffer[0],children:[]};
    buffer=split(buffer.slice(1));
    if(buffer[0].length) tree.children[0]=construct(tree.children[0],buffer[0]);
    if(buffer[1].length) tree.children[1]=construct(tree.children[1],buffer[1]);
    return tree;
}

var Tree=construct(null,[...Gates,...Vals]);
var Solutions=[];

function calculate(tree) {
    if(tree.children[0]) calculate(tree.children[0]);
    if(tree.children[1]) calculate(tree.children[1]);
    if(tree.data=='0') tree.val=0;
    if(tree.data=='1') tree.val=1;
    if(tree.data=='o'||tree.data=='O') tree.val=tree.children[0].val|tree.children[1].val;
    if(tree.data=='a'||tree.data=='A') tree.val=tree.children[0].val&tree.children[1].val;
    return tree;
}
function solve() {
    var gates=Gates;
    for(var i=0;i<gates.length;i++) {
        
    }
}
function solve(char,string=Gates) {
    if(char<string.length) solve(char+1,string);
    else {
        if(calculate(construct(null,[...string,...Vals])).val==Result) {
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

calculate(Tree);
if(Tree.val==Result) console.log('S');
else {
    solve(0);
    if(Solutions.length==0) console.log('I');
    else {
        var Smallest=Solutions[0].length;
        Solutions.map(s=>s.length<Smallest?Smallest=s.length:null);
        console.log(Solutions.filter(s=>s.length==Smallest).join(' '));
    }
}