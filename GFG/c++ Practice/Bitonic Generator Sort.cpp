//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> bitonicGenerator(vector<int>& arr) {
        // Your code goes here
        vector<int>even,odd;
        for(int i=0;i<arr.size();i++){
            if(i%2==0){
                even.push_back(arr[i]);
            }else{
                odd.push_back(arr[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        for(int i=0;i<odd.size();i++){
            even.push_back(odd[i]);
        }
        return even;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.bitonicGenerator(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        // cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends