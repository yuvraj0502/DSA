#include<bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n==0){
        return 0;
    }
    int prev=fib(n-1);
    return n+prev;
}


int main(){
    int number;

    cout << "Enter a number print the Fibonacci sequence: ";
    cin >> number;

    cout << fib(number) << endl;

    return 0;
}