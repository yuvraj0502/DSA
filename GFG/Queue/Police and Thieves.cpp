//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        // Code here 
        queue<int>police;
        queue<int>thief;
        
        for(int i=0;i<n;i++){
            if(arr[i]=='P'){
                police.push(i);
            }else{
                thief.push(i);
            }
        }
        int count=0;
        while(!police.empty() && !thief.empty()){
            if(abs(police.front()-thief.front())<=k){
                count++;
                police.pop();
                thief.pop();
            }else if(police.front()>thief.front()){
                thief.pop();
            }else{
                police.pop();
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	
cout << "~" << "\n";
}
	return 0; 
} 


// } Driver Code Ends