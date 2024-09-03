//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        // Your Code goes here.
        vector<double>vec1,vec2;
        for(int i=0;i<arr.size();i++){
            double x=log10(arr[i]);
            x/=arr[i];
            vec1.push_back(x);
        }
        for(int i=0;i<brr.size();i++){
            double x=log10(brr[i]);
            x/=brr[i];
            vec2.push_back(x);
        }
        sort(vec2.begin(),vec2.end());
        long long count=0;
        for(int i=0;i<vec1.size();i++){
            int index=lower_bound(vec2.begin(),vec2.end(),vec1[i])-vec2.begin();
            count+=index;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> ex;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            ex.push_back(num);
        a = ex;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        int num2;
        while (ss >> num2)
            b.push_back(num2);

        Solution ob;
        cout << ob.countPairs(a, b) << endl;
    }
}
// } Driver Code Ends