#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1;
    int c1;
    int r2;
    int c2;

    cout<<"Enter a first matirx row number:"<<" ";
    cin>>r1;

    cout<<"Enter a first matrix column number:"<<" ";
    cin>>c1;

    cout<<"Enter a second matrix row number:"<<" ";
    cin>>r2;

    cout<<"Enter a second matrix column number:"<<" ";
    cin>>c2;

    int matrix1[r1][c1];
    int matrix2[r2][c2];

    cout<<"Enter a first matrix element"<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>matrix1[i][j];
        }
        cout<<endl;
    }

    cout<<"Enter a second matrix element"<<endl;

    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>matrix2[i][j];
        }
        cout<<endl;
    }

    if(c1!=r2){
        cout<<"This two matrix multiplication is not possible:"<<endl;
        return;
    }

    int ansMatrix[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int =0;k<r2;k++){
                ansMatrix[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    cout<<"Multiplication Matrix"<<endl;

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<ansMatrix[i][j]<<endl;
        }
        cout<<endl;
    }

    return 0;
}