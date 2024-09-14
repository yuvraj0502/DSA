//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countTriplets(int Arr[], int N, int L, int R) {
        // code here
        int count=0;
        sort(Arr,Arr+N);
        
        for(int i=0;i<N-2;i++){
            int left=i+1;
            int right=N-1;
            
            while(left<right){
                int sum=Arr[i]+Arr[left]+Arr[right];
                
                if(sum<L){
                    ++left;
                }
                else if(sum>R){
                    --right;
                }
                else{
                   int rightcount=right;
                   while(left<right && Arr[i]+Arr[left]+Arr[right]>=L
                    && Arr[i]+Arr[left]+Arr[right]<=R){
                        --rightcount;
                    }
                    count+=(right-rightcount);
                    ++left;
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        int L, R;
        cin >> L >> R;
        Solution obj;
        cout << obj.countTriplets(Arr, N, L, R) << endl;
    }
    return 0;
}
// } Driver Code Ends