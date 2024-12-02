#include<bits/stdc++.h>
using namespace std;

int main() {
    
    vector<vector<int>> arr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = arr.size();   
    int cols = arr[0].size(); 

    int maxColumnSum = INT_MIN; 

    for (int col = 0; col < cols; col++) {
        int columnSum = 0;
        for (int row = 0; row < rows; row++) {
            columnSum += arr[row][col];
        }
        if (columnSum > maxColumnSum) {
            maxColumnSum = columnSum; 
        }
    }

    cout << "Maximum column sum: " << maxColumnSum << endl;

    return 0;
}
