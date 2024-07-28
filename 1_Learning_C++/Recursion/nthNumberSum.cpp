#include<bits/stdc++.h>
using namespace std;


int sum(int n){

    if(n==0){
        return 0;
    }

    int prev=sum(n-1);
    return n+prev;
}


int main(){
    int n;

    cout << "Enter a number of would print the sum: ";
    cin >> n;

    cout << sum(n) << endl;
    return 0;
}