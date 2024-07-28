//! 0-1 Pattern

#include<iostream>
using namespace std;

int main(){
    int size;

    cout << "Enter a number of size: ";
    cin >> size;
    
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
           if((i+j)%2==0){
            cout << " 1 ";
           }else{
            cout << " 0 ";
           }
        }

        cout << endl;
    }

    return 0;

}