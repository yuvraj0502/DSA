//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
 
class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        
        for(int i=0;i<n;i++){
            if(str[i]<='Z'){
                upper[str[i]-'A']++;
                str[i]='1';
            }
            else{
                lower[str[i]-'a']++;
                str[i]='0';
            }
        }
        string low;
        string upp;
        for(int i=0;i<26;i++){
            while(lower[i]){
                low+=i+'a';
                lower[i]--;
            }
        }
        for(int i=0;i<26;i++){
            while(upper[i]){
                upp+=i+'A';
                upper[i]--;
            }
        }
        int l=0;
        int u=0;
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                str[i]=low[l];
                l++;
            }
            else{
                str[i]=upp[u];
                u++;
            }
        }
        return str;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends