//! palimdromic Pattern

#include<iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter a number of size: ";
    cin >> size;

    for(int i=1;i<=size;i++){
        int j;
        for(j=1;j<=size-i;j++){
            cout << " ";
        }
        int count=i;
        for(;j<=size;j++){
            cout << count << " ";
            count--;
        }

        count=2;
        for(;j<=size+i-1;j++){
            cout << count << " ";
            count++;
        }

        cout << endl;
    }
    return 0;
}