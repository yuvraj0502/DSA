//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int ternarySearch(int arr[], int N, int K) 
    { 
       // Your code here
       if(N==0){
           return -1;
       }
       if(arr[0]==K){
           return true;
       }
       else{
           int key=ternarySearch(arr+1,N-1,K);
           return key;
       }
    }
};

//{ Driver Code Starts.
int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        
        int arr[N];
        
        for(int i = 0;i<N;i++){
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.ternarySearch(arr, N, K) << endl;

    }

	return 0; 
} 

// } Driver Code Ends