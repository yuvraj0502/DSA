//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string LargestEven(string S){
        //complete the function here
        sort(S.begin(),S.end(),greater<char>());
        int start=S.size()-1;
        
        while(start>=0){
            if(int(S[start])%2==0){
                swap(S[start],S[S.size()-1]);
                break;
            }
            start--;
        }
        sort(S.begin(),S.end()-1,greater<char>());
        return S;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.LargestEven(s) << "\n";
    }
return 0;
}


// } Driver Code Ends