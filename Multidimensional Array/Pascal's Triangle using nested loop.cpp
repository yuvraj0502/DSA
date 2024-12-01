#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number of row for Pascal's Triangle : "<<" ";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int val=1;
        for(int j=0;j<=i;j++){
            cout<<val<<" ";
            val=val*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}