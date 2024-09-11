//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    int maxProfit(int m, vector<int> &arr) {
        // Your code goes here.
        int ans=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size() && m>0;i++){
            if(arr[i]<0){
                ans+=arr[i];
                m--;
            }
        }
        return abs(ans);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.maxProfit(k, arr) << endl;
    }
    return 0;
}

// } Driver Code Ends