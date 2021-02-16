#include<bits/stdc++.h>

int Result,Solution=0;
int** Solutions;
std::string Buffer;

int calculate(std::string buffer,int index=0) {
    if(buffer[index]<51) return buffer[index];
    else return (buffer[index]=='a'||buffer[index]=='A')?(calculate(buffer,index*2+1)&calculate(buffer,index*2+2)):(calculate(buffer,index*2+1)|calculate(buffer,index*2+2));
}
void solve(int index,std::string buffer) {
    if(index>=buffer.size()) {
        if(calculate(buffer)==Result) {
            int c=0;
            Solutions[Solution]=new int[buffer.size()];
            for(int i=0;i<buffer.size();i++) {
                if(buffer[i]!=Buffer[i]) Solutions[Solution][++c]=i;
            }
            Solutions[Solution++][0]=c;
        }
    }
    else {
        solve(index+1,buffer);
        if(buffer[index]=='a'|buffer[index]=='o') {
            buffer[index]=buffer[index]=='a'?'o':'a';
            solve(index+1,buffer);
        }
    }
}
int main(int argc,char** argv) {
    Result=*argv[4];
    Solutions=new int*[1<<20];
    for(int i=0;i<strlen(argv[2]);i++) Buffer+=argv[2][i];
    for(int i=0;i<strlen(argv[3]);i++) Buffer+=argv[3][i];
    solve(0,Buffer);
    if(Solution==0) std::cout<<'I';
    else if(calculate(Buffer)==Result) std::cout<<'S';
    else {
        int min=**Solutions;
        for(int i=0;i<Solution;i++) min=Solutions[i][0]<min?Solutions[i][0]:min;
        for(int i=0;i<Solution;i++) {
            for(int i2=0;Solutions[i][0]==min&&i2<Solutions[i][0]&&std::cout<<(i2?',':' ');)
                std::cout<<Solutions[i][++i2];
        }
    }
}