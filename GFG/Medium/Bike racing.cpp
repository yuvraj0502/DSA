//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        // code here
        long start=0;
        long end=max(L,M)+1;
        long ans=0;
        while(start<=end){
            int mid=(start+end)/2;
            int fast=0;
            for(int i=0;i<N;i++){
                if(H[i]+A[i]*mid>=L){
                    fast+=H[i]+A[i]*mid;
                    if(fast>=M){
                        break;
                    }
                }
            }
            if(fast>=M){
                ans=mid;
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends