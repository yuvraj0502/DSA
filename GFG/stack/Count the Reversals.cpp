//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    
cout << "~" << "\n";
}
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
    if(s.size()%2){
        return -1;
    }
    stack<char>st;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(st.empty() && s[i]=='}'){
            count++;
            st.push('{');
        }else if(s[i]=='{'){
            st.push('{');
        }else{
            st.pop();
        }
    }
    return count+st.size()/2;
}