//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int low=0;
        int high=n-1;
        int ans;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<=k){
                int diff1=abs(arr[mid]-k);
                int diff2=abs(arr[mid+1]-k);
                if(diff1==diff2){
                    ans=arr[mid+1];
                }
                else if(diff1<diff2){
                    ans=arr[mid];
                }
                else{
                    ans=arr[mid+1];
                }
                low=mid+1;
            }
            else if(arr[mid]<k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends