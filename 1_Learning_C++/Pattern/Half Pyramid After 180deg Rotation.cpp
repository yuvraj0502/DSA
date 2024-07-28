//! Half Pyramid After 180deg Rotation

#include<iostream>
using namespace std;

int main(){
    int size ;

    cout << "Enter a number of size: ";
    cin >> size;

    for(int i=0;i<=size;i++){
        for(int j=0;j<=size;j++){
             if(j<=size-i){
                cout << "   ";
             }else{
                cout << " * ";
             }
        }
        cout << endl;
    }
    return 0;
}