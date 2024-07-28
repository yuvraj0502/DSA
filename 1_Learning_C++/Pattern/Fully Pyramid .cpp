//! Fully Pyramid Pattern

#include<iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter a number of size: ";
    cin >> size;

    for(int i=1;i<=size;i++){
        for(int j=1;j<=size-i;j++){
            cout << " ";
        }

        for(int j=1;j<=2*i-1;j++){
            cout << "*" ;
        }

        cout << endl;
    }

    return 0;
}