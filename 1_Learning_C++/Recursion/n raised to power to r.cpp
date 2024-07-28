

#include<bits/stdc++.h>
using namespace std;

int basefun(int b,int p){
    if(p==0){
        return 1;
    }

   int prevpower = basefun(b,p-1);
   return b*prevpower;
}


int main(){
    int base;
    int power;
    

    cout << "Enter a base number: ";
    cin >> base;
    
    cout << "Enter a power number: ";
    cin >> power;

    cout << basefun(base,power) << endl;
    return 0;
}