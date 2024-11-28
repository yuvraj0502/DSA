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
        cout<<endl;
    }
    int value;
    cout<<"Enter a value would you find:"<<" ";
    cin>>value;

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(arr[row][column]==value){
                cout<<"This value is present for the "<<i<<"th row"<<j<<"th column"<<" ";
            }
        }
    }
    cout<<"value is not found";
    return 0;

}