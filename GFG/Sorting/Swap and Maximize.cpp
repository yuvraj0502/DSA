//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        long long int sum=0;
        int start=0;
        int end=arr.size()-1;
        sort(arr.begin(),arr.end());
        
        while(start<end){
            sum+=abs(arr[start]-arr[end])+abs(arr[start+1]
                -arr[end]);
            start++;
            end--;
        }
        sum+=arr[start]-arr[0];
        return sum;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends