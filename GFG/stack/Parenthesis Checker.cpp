//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool ispar(string x) {
        // code here
        if(x.length()<=1){
            return false;
        }
        
        stack<char>st;
        for(int i=0;i<x.length();i++){
            if(x[i]=='[' || x[i]=='{' || x[i]=='('){
                st.push(x[i]);
            }
            else if(st.empty()){
                return false;
            }
            else{
                if(x[i]==')'){
                    if(st.top()!='('){
                        return false;
                    }
                }
                if(x[i]=='}'){
                    if(st.top()!='{'){
                        return false;
                    }
                }
                if(x[i]==']'){
                    if(st.top()!='['){
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
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}
// } Driver Code Ends