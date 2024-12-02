// Each row is sorted in non-decreasing order
// The first interger of each row s greater than the last interger of the previous element

#include<bits/stdc++.h>
using namespace std;


//Time Complexity = O(long(n));
bool searchInRow(vector<vector<int>>&matrix,int target,int row){
    int n=matrix[0].size();
    int startRow=0;
    int endRow=n-1;

    while(startRow<=endRow){
        int mid=startRow+(endRow-startRow)/2;

        if(target==matrix[row][mid]){
            return true;
        }
        else if(target>matrix[row][mid]){
            startRow=mid+1;
        }
        else{
            endRow=mid-1;
        }
    }
}

//Time Complexity = O(log(m))
bool searchMatrix(vector<vector<int>>&matrix,int target){
    int m=matrix.size();
    int n=matrix[0].size();

    int startRow=0;
    int endRow=m-1;

    while(startRow <= endRow){
        int midRow = startRow + (endRow-startRow)/2;

        if(target >= matrix[midRow][0] && targer <= matrix[midRow][n-1]){
            return searchInRow(matrix,target,midRow);
        }
        else if(target >= martix[midRow][n-1]){
            startRow = midRow+1;
        }
        else{
            endRow = midRow-1;
        }
    }
}

// Total Time Compledxity = O(log(m*n))

int main(){
    int row;
    int column;

    cout<<"Enter a number of row and column: "<<" ";
    cin>>row>>column;

    int matrix[row][column];

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>matrix[row][column];
        }
    }
    int target;
    cout<<"Enter a value would you find"<<" ";
    cin>>target;


    cout<< searchMatrix(matrix,target)<<endl;
    return 0;
}