//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
        vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            // Code here
            vector<int>result=a;
            for(int i=0;i<n-1;i++){
                if((result[i]+result[i+1])%2==0){
                    int j=i;
                    while(j>=0 && result[j]<result[j+1] 
                    && (result[j]+result[j+1])%2==0){
                        swap(result[j],result[j+1]);
                        j--;
                    }
                }
            }
            return result;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends