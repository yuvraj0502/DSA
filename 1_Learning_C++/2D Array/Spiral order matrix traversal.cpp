//! Spiral order matrix traversal

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;

    cout << "Enter a row size: ";
    cin >> n;

    cout << "Enter a column size: ";
    cin  >> m;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    int row_start=0;
    int row_end=n-1;
    int column_start=0;
    int column_end=m-1;


    while(row_start<=row_end && column_start<=column_end){
        for(int i=column_start;i<=column_end;i++){
            cout << a[row_start][i] << " ";
        }
        row_start++;

        for(int i=row_start;i<=row_end;i++){
            cout << a[i][column_end] << " ";
        }
        column_end--;

        for(int i=column_end;i>=column_start;i--){
            cout << a[row_end][i] << " ";
        }
        row_end--;

        for(int i=row_end;i>=row_start;i--){
            cout << a[i][column_start] << " ";
        }
        column_start++;
    }

    return 0;
}