//! Check the array is sorted or not 

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    if(n==0){
        return true;
        
    }
    bool resetarray= isSorted(arr+1,n-1);
    return  (arr[0]<arr[1] && resetarray);
}

int main(){
    int size;

    cout << "Enter a size of array: ";
    cin >> size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin >> arr[i] ;
    }

    cout << isSorted(arr,size)  << endl;

    return 0;
}