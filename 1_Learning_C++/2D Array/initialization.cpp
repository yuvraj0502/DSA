
//! 2D Array initialization using loop

#include<bits/stdc++.h>
using namespace std;

int main(){
    int rows;
    int columns;

    cout << "Enter a number of rows: ";
    cin >> rows;

    cout << "Enter a number of columns: ";
    cin >> columns;

    int array[rows][columns];

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin >> array[i][j] ;
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout << array[i][j] << " "; ;
        }
        cout << endl;
    }
     
    return 0;
}