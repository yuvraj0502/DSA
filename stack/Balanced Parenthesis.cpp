#include<bits/stdc++.h>
#include<stack>
using namespace std;


bool checkParenthesis(string s){
    if(s.length()<=1){
        return false;
    }
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else if(st.empty()){
            return false;
        }
        else{
            if(s[i]==')'){
                if(st.top()!='('){
                    return false;
                }
            }
            else if(s[i]==']'){
                if(st.top()!='['){
                    return false;
                }
            }
            else if(s[i]=='}'){
                if(st.top()!='{'){
                    return false;
                }
            }
            st.pop();
        }
    }
    if(st.empty()){
        return true;
    }
    return false;
};

int main(){
    string s="{([])}";
    if(checkParenthesis(s)){
        cout<<"valid string"<<endl;
    }else{
        cout<<"not valid"<<endl;
    }
    return 0;
}
