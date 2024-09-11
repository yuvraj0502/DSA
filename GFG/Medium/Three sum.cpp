//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> triplets(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        
        for(int i=0;i<arr.size();i++){
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            
            int j=i+1;
            int k=arr.size()-1;
            
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    ans.push_back({arr[i],arr[j],arr[k]});
                    
                    while(j<k && arr[j]==arr[j+1]){
                        j++;
                    }
                    
                    while(j<k && arr[k]==arr[k-1]){
                        k--;
                    }
                    
                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();

        Solution obj;
        vector<vector<int>> res = obj.triplets(arr);
        if (res.size() == 0) {
            cout << endl;
        } else
            Matrix::print(res);
    }
}

// } Driver Code Ends