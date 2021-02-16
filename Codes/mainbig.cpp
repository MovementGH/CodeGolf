#include<iostream>
#include<string>
int main(int argc,char** argv) {
    bool found[26];
    char Keys[strlen(argv[1])];
    int RawKeyLen[strlen(argv[1])],NKeys=0,NWords=0;
    std::string* Words=new std::string[strlen(argv[2])];
    for(int i=0;i<strlen(argv[1]);i++) {
        if(found[argv[1][i]-65]==false) {
            found[argv[1][i]-65]=true;
            Keys[NKeys++]=argv[1][i];
        }
    }
    for(int i=0;i<strlen(argv[2]);i++) {
        if(argv[2][i]==' ') NWords++;
        else Words[NWords]+=argv[2][i];
    }
    NWords++;
    int WordMap[NWords];
    for(int i=0;i<NWords;i++) {
        WordMap[i]=-1;
    }
    for(int Key=0;Key<NKeys;Key++) {
        int Start=0;
        for(int i=0;argv[1][i]!=Keys[Key];i++) {
            Start+=RawKeyLen[i];
        }
        int Starts[NWords],NStarts=0;
        for(int i=0;i<NWords;i++) {
            if(Words[i]==Words[Start])
                Starts[NStarts++]=i;
        }
        bool Works=true;
        int Length;
        for(Length=1;Works;Length++) {
            for(int i2=1;i2<NStarts;i2++) {
                if(Words[Start+Length]!=Words[Starts[i2]+Length]||WordMap[Starts[i2]+Length]!=-1)
                    Works=false;
            }
            int WordCount=0;
            for(int i2=0;i2<NWords;i2++) {
                if(Words[Start+Length]==Words[i2])
                    WordCount++;
            }
            if(WordCount>NStarts) Works=false;
            if(WordMap[Start+Length]!=-1||Length+Start>NWords)
                Works=false;
        }
        Length--;
        for(int i=0;i<NStarts;i++)
            for(int i2=0;i2<Length;i2++)
                WordMap[Starts[i]+i2]=Key;
        for(int i=0;i<strlen(argv[1]);i++) {
            if(argv[1][i]==Keys[Key])
                RawKeyLen[i]=Length;
        }
        std::string Decoded="";
        for(int i=0;i<Length;i++)
            Decoded+=Words[Start+i]+" ";
        std::cout<<Keys[Key]<<" = "<<Decoded<<std::endl;
    }
}


int main(int argc,char**argv) {
    
    std::string words[strlen(argv[2])],solve;
    int wordcount=0;
    for(int i=0;i<strlen(argv[2]);i++) {
        if(argv[2][i]==' ')
            wordcount++;
        else
            words[wordcount]+=argv[2][i];
    }
    wordcount++;

    int keylen[strlen(argv[1])],wordmap[strlen(argv[2])];
    for(int i=0;i<strlen(argv[2]);i++)wordmap[i]=-1;
    for(int key=0;key<strlen(argv[1]);key++) {
        int keystarts[strlen(argv[1])];
        for(int i=0;i<key;i++) keystart+=keylen[i];
        
        if(wordmap[keystart]!=-1){
            keylen[key]=keylen[wordmap[keystart]];
            continue;
        }
        
        int keystarts[strlen(argv[1])],keystartscount=0;
        for(int i=0;i<wordcount;i++)
            if(words[keystart]==words[i])
                keystarts[keystartscount++]=i;
        
        bool works=true;
        int length=0;
        for(length=1;works;length++) {
            for(int i=0;i<keystartscount;i++)
                if(words[keystart+length]!=words[keystarts[i]+length]||wordmap[keystarts[i]+length]!=-1)
                    works=false;
            int count=0;
            for(int i=0;i<wordcount;i++)if(words[keystart+length]==words[i])count++;
            if(count>keystartscount||wordmap[keystart+length]!=-1||length+keystart>wordcount)works=false;
        }
        length--;
        
        
        solve="";
        for(int i=0;i<length;i++)solve+=words[keystart+i]+" ";
        std::cout<<argv[1][key]<<" = "<<solve<<"\n";
        
        keylen[key]=length;
        for(int i=0;i<keystartscount;i++)for(int i2=0;i2<length;i2++)wordmap[keystarts[i]+i2]=key;
    }
}
