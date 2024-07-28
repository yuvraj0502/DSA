//! Zig-Zag Pattern


#include<iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter a number of size: ";
    cin >> size;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=size;j++){
            if(((i+j)%4==0)  || (i==2 && j%4==0) ){
                cout << "*";
            }else{
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}