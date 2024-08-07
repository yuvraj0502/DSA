//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string removeConsonants(string s){
    //complete the function heredef removeConsonants(s):
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='A' || s[i]=='i' || s[i]=='I'
        || s[i]=='o' || s[i]=='O' || s[i]=='e' || s[i]=='E'
        || s[i]=='u' || s[i]=='U'){
            str.push_back(s[i]);
        }
      }
      if(str.empty()){
          return "No Vowel";
      }
      return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}
// } Driver Code Ends