//! It take 2 parameter,first one being the point of array/vectoe from where the sorting need to begin 
//! second being the length up to which we want the array/vector to get sorted
//! The third parameter is optional and can be used in cases such as if we want to sort the element 
//! lexicographically
//! By default inbuilt function sorts the element in ascending order
//! Time complexity : O(n log n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;

    cout << "Enter a size of array: ";
    cin >> size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin >>arr[i];
    }

    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n); //! this function is STL library funtion (Standard Template Library) 
     
     //! array was sort to descending order
    sort(arr,arr+n,greater<int>());

    cout << "sorted array:"
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}