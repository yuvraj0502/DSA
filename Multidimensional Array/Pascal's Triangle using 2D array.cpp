#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>PascalTrianle(int n){
     vector<vector<int>>pascal(n);

     for(int i=0;i<n;i++){
        pascal[i].resize(i+1);

        for(int j=0;j<=i;j++){
            if(j==0 || j==1){
                pascal[i][j]=1;
            }else{
                pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1];
            }
        }
     }
     return pascal;
}

int main(){
    int n;
    cout<<"Enter a number of row for the Pascal's Trianlge: "<<" ";
    cin>>n;

    vector<vector<int>>ans;
    ans=PascalTrianle(n);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();i++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
