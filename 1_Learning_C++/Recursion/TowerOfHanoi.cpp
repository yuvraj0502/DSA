//! Tower of Hanoi

//! Rules
//!    1. Only one disk tranferred in 1 step
//!    2. Smaller disks  are always kept on top of larger disks

//! Time complexity = O(2^n)


#include<bits/stdc++.h>
using namespace std;


void tower(int n, char src, char desc, char helper){
    if(n==0){
        return;
    }

    tower(n-1,src,helper,desc);
    cout << "Move from" << " " << src << " " << "to" << " " << desc << endl;
    tower(n-1,helper,desc,src);
}


int main(){
    tower(3,'a','c','b');
    return 0;
}