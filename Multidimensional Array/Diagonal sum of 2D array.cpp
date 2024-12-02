#include<bits/stdc++.h>
using namespace std 

//primary Diagonal : i==j
// secodary Diagonal : j=n-1-i

int main(){
    int n;
    int sum=0;

    cout<<"Enter a number of row and column: ";
    cin>>n;

    int matrix[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    // Time Complexity : O(n*2)
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=matrix[i][j];
            }
            else if(j==n-i-1){
                sum+=matrix[i][j];
            }
        }
    }
    
    // Time Complexity: O(n)
    // or
    // for(int i=0;i<n;i++){
    //     sum+=matrix[i][i];
    //     if(i!=n-i-1){
    //         sum+=matrix[i][n-1-i];
    //     }
    // }


    cout<<sum;
    return 0;
}