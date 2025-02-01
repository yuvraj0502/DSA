#include<bits/stdc++.h>
using namespace std;


bool isArraySpecial(vector<int>&num){
    if(nums.size()==1){
        return true;
    }

    for(int i=0;i<num.size()-1;i++){
        if(num[i]%2 == num[i+1]%2){
            return false;
        }
    }
    return true;
}