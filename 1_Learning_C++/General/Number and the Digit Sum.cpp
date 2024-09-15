//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
            long int count=0;
            for(int i=10;i<=N;i++){
                long sum=0;
                long num=i;
                while(num>0){
                    sum=sum+num%10;
                    num/=10;
                }
                if((i-sum)>=K){
                    count++;
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
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends