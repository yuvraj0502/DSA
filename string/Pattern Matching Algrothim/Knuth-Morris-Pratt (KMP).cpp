#include<bits/stdc++.h>
using namespace std;

void constructLps(vector<int>Lps, string &pattern){
    int len=0;
    int i=1;

    Lps[0]=0;

    while(i<pattern.length()){
        if(pattern[i]==pattern[len]){
            len++;
            Lps[i]=len;
            i++;
        }
        else{
            if(len!=0){
                Lps=Lps[len-1];
            }else{
                Lps[i]=0;
                i++;
            }
        }
    }
};


vector<int>searchPattern(string &text,string &pattern){
    int txtLength=text.length();
    int patLength=pattern.length();

    vector<int>Lps(patLength);
    vector<int>result;

    constructLps(Lps,pattern);

    int i=0;
    int j=0;
    
    while(i<txtLength){
        if(text[i]==pattern[j]){
            i++;
            j++;

            if(j==patLength){
                result.push_back(i-j);
                j=Lps[j-1];
            }
        }else{
            if(j!=0){
                j=Lps[j-1];
            }else{
                i++;
            }
        }
    }
    return result;
}