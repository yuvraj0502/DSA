//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int countSwaps(int arr[], int n)
	{
	    // Your code goes here
	    int ans=0;
	    for(int i=0;i<n-1;i++){
	        if(arr[i]>=arr[i+1]){
	            swap(arr[i],arr[i+1]);
	            ans++;
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countSwaps(arr, n);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends