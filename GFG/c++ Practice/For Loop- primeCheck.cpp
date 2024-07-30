//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string isPrime(int n) {
        
        // Code here
        
        for (int i = 2; i <= sqrt(n); i++) {
          if(n%i==0){
              return "No";
          }
        }
        if(n==0 || n==1){
            return "No";
        }
        return "Yes";
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        string res = obj.isPrime(n);
        
        cout<<res<<"\n";
        
    }
}

// } Driver Code Ends