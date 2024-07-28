//! Half Pyramid Using Number 

#include<iostream>
using namespace std;

int  main(){
    int size;

    cout << "Enter a number of size: ";
    cin >> size;

    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            cout << j+1 << " ";
        }

        cout << endl;
    }

    return 0;
}