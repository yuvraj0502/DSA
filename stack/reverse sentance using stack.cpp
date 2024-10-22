#include<bits/stdc++.h>
using namespace std;
#include<stack>


void reverseSentance(string s){
    stack<string>st;

    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=" " && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top<<endl;
        st.pop(); 
    }cout<<endl;
}

int main(){
    string s="Hey, How are you?";
    reverseSentance(s);

}