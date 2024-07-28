//! Butterfly Pattern

#include<iostream>
using namespace std;

int main(){
   int size;

   cout << "Enter a number of size: ";
   cin >> size;

   for(int i=1;i<=size;i++){
       for(int j=1;j<=i;j++){
        cout << "*";
       }

       int space = 2*size-2*i;
       for(int i=1;i<=space;i++){
        cout << " ";
       }

       for(int j=1;j<=i;j++){
        cout << "*";
       }

       cout << endl;
   }

   for(int i=size;i>=1;i--){
       for(int j=1;j<=i;j++){
        cout << "*";
       }

       int space = 2*size-2*i;
       for(int i=1;i<=space;i++){
        cout << " ";
       }

       for(int j=1;j<=i;j++){
        cout << "*";
       }

       cout << endl;
   }

   return 0;

}