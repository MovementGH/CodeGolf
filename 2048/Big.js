var Input=process.argv[2];

var Numbers=Input.split(' ');

function Solve(Numbers) {
    for(var i=0;i<Numbers.length;i++) {
        if(Numbers[i]==Numbers[i+1]) {
            Numbers[i]*=2;
            Numbers.splice(i+1,1);
            i=0;
        }
    }
    return Numbers;
}

console.log(Solve([...Numbers]).join(' '));
console.log(Solve(Numbers.reverse()).reverse().join(' '));