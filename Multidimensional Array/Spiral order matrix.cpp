#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,column;
    cout<<"Enter a number of row"<<" ";
    cin>>row;

    cout<<"Enter a number of column"<<" ";
    cin>>column;

    int arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[row][column];
        }
    }

    int rowStart=0;
    int rowEnd=row-1;
    int columnStart=0;
    int columnEnd=column-1;

    while(rowStart<=rowEnd && columnStart<=columnEnd){

        //for row start
        for(int i=columnStart;i<=columnEnd;i++){
            cout<<arr[rowStart][i]<<" ";
        }
        rowStart++;
        
        //for column end
        for(int i=rowStart;i<=rowEnd;i++){
            cout<<arr[i][columnEnd]<<" ";
        }
        columnEnd--;
        
        //for row end
        for(int i=columnEnd;i>=columnStart;i--){
            cout<<arr[rowEnd][i]<<" ";
        }
        rowEnd--;
        
        //for column start
        for(int i=rowEnd;i>=rowStart;i--){
            cout<<arr[i][columnStart]<<" ";
        }
        columnStart++;
    }
}