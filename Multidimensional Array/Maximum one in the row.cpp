#include<bits/stdc++.h>
using namespace std;


int maximumOneRow(vector<vector<int>>&vec){
    int maxOneRow=-1;
    int maxOne=INT_MIN;
    int column=vec[0].size();

    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();i++){
            if(vec[i][j]==1){
                int numberOfOne=column-j;
                if(numberOfOne>maxOne){
                    maxOne=numberOfOne;
                    maxOneRow=i;
                }
                break;
            }
        }
    }
    return maxOneRow;
}

int main(){
    int row;
    int column;
     
    cout<<"Enter a number of row and column:"<<" ";
    cin>>row>>column;

    vector<vector<int>>vec(row,vector<int>(column));
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>vec[row][column];
        }
    }

    int result=maximumOneRow(vec);
    cout<<result<<endl;

    return 0;
}