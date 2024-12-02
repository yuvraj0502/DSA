#include<bits/stdc++.h>
using namespace std;

int main(){
    int row;
    int column;
    int maxRowSum = INT_MIN;

    cout<<"Enter a number of row and column:"<<" ";
    cin>>row>>column;

    int matrix[row][column];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<row;i++){
        int rowSum=0;
        for(int j=0;j<column;j++){
            rowSum+=matrix[i][j];
            if(rowSum>maxRowSum){
                maxRowSum=rowSum;
            }
        }
    }

    //OR 
    // for(int i=0;i<row;i++){
    //     int rowsum=0;
    //     for(int j=0;j<column;j++){
    //         rowsum+=matrix[i][j];
    //     }
    //     maxRowSum=max(maxRowSum,rowsum);
    // }


      
    cout<<maxRowSum;
    return 0;
}