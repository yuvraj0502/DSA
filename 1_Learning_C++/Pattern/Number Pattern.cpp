//!   Number Pattern

#include<iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter a number of size: ";
    cin >> size;

    for(int i=0;i<size;i++){
    
        for(int j=0;j<=size-i;j++){
            cout << " ";
        }
        int number=1;
        for(int j=0;j<=i;j++){
            cout << number << " ";
            number++;
        }

        cout << endl;

    }

    return 0;
}