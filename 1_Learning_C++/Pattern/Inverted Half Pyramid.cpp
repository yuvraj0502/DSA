//! Inverted Half Pyramid


#include<iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter a number of size: ";
    cin >> size;

    for(int i=size;i>0;i--){
        for(int j=i;j>0;j--){
            cout << " * ";
        }
        cout << "\n";
    }

    return 0;
}