//!  Hollow Rectangle Pattern

#include<iostream>
using namespace  std;

int main(){
    int rows;
    int columns;

    cout << "Enter a number of rows: ";
    cin >> rows;

    cout << "Enter a number of columns: ";
    cin >> columns;

    for(int i=0;i<=rows;i++){
        for(int j=0;j<=columns;j++){
            if(i==0 || i==rows ){
                cout << " * ";
            }else if(j==0 ||  j==columns){
                cout << " * ";
            }else{
                cout << "   ";
            }
        }
        cout << '\n';
    }

    return 0;
}