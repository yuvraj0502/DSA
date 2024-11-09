//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        // code here
        priority_queue<int>qu;
        for(int i=0;i<N;i++){
            qu.push(A[i]);
        }
        long long total=0;
        for(int i=0;i<K;i++){
            int maxTotal=qu.top();
            qu.pop();
            total+=maxTotal;
            qu.push(maxTotal/2);
        }
        return total;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends