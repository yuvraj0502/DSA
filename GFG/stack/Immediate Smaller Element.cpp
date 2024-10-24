//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    stack<int>st;
	    for(int i=n-1;i>=0;i--){
	        int current=arr[i];
	        if(!st.empty() && arr[i]>st.top()){
	            arr[i]=st.top();
	            st.push(current);
	        }else{
	            st.push(arr[i]);
	            arr[i]=-1;
	        }
	    }
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends