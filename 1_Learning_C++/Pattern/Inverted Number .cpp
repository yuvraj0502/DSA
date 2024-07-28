//! Inverted Number 

#include<iostream>
using namespace std;


int main(){

    int size;

    cout <<  "Enter a number of size: ";
    cin >> size;

    for(int i=size;i>=0;i--){
        int number=1;
        for(int j=i;j>0;j--){
            cout << number << " ";
            number++;
            
        }

        cout << endl;

    }

    return 0;
}