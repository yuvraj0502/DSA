//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
        int sum= A+B;
        int multi= A*B;
        int sub;
        int div;
        if(B>A){
          sub=B-A;
          div=B/A;
        }
        else{
          sub= A-B;
          div= A/B;
        }
        
        return {sum,multi,sub,div};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}
// } Driver Code Ends