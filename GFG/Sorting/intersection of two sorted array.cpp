//{ Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        vector<int>result;
        int i=0;
        int j=0;
        
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]==arr2[j]){
                result.push_back(arr1[i]);
                    int a=arr1[i];
                    
                    while(i<arr1.size() && arr1[i]==a){
                        i++;
                    }
                    while(j<arr2.size() && arr2[j]==a){
                        j++;
                    }
                
            }
            else if(arr1[i]<arr2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        if(result.size()==0){
            result.push_back(-1);
        }
        return result;
    }
};

//{ Driver Code Starts.
/* Driver program to test above function */
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {

        vector<int> arr1, arr2;
        string input1;
        getline(cin, input1);
        stringstream ss(input1);
        int number1;
        while (ss >> number1) {
            arr1.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream sss(input2);
        int number2;
        while (sss >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        // Function calling
        vector<int> v;
        v = ob.printIntersection(arr1, arr2);

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << endl;
        // string tilde;
        // getline(cin, tilde);
    }

    return 0;
}

// } Driver Code Ends