//{ Driver Code Starts
//Initial Template for C++
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

queue<int>_push(int arr[],int n);


void _pop(queue<int>s);


// } Driver Code Ends
//User function Template for C++


//User function Template for C++

queue<int>_push(int arr[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int>qu;
   for(int i=0;i<n;i++){
       qu.push(arr[i]);
   }
   return qu;
}

void _pop(queue<int>s)
{
    while(!s.empty()){
        cout<<s.front()<<" ";
        s.pop();
    }
    //print front and dequeue for each element until it becomes empty
} 

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    queue<int>mys =_push(arr,n);
	    _pop(mys);
	    cout<<endl;
	    
	    
	    
	
cout << "~" << "\n";
}
	return 0;
}


// } Driver Code Ends