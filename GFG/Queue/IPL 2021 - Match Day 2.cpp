//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int>maxCount;
        deque<int>qu;
        
        for(int i=0;i<k-1;i++){
            if(qu.empty()){
                qu.push_back(i);
            }else{
                while(!qu.empty() && arr[i]>arr[qu.back()]){
                    qu.pop_back();
                }
                qu.push_back(i);
            }
        }
        for(int i=k-1;i<n;i++){
            while(!qu.empty() && arr[i]>arr[qu.back()]){
                qu.pop_back();
            }
            qu.push_back(i);
            
            if(qu.front()<=i-k){
                qu.pop_front();
            }
            maxCount.push_back(arr[qu.front()]);
        }
        return maxCount;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}
// } Driver Code Ends