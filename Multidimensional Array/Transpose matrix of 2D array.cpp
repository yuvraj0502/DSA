#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,column;
    cin>>row>>column;

    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[row][column];
        }
    }

    int transpose[column][row];
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}