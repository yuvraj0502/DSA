//! Floyd's Triangle

#include<iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter a size of: ";
    cin >> size;


    int number=1;
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            cout << number << " ";
            number++;
        }

        cout << endl;
    }

    return 0;
}