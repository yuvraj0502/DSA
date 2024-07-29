//! The linear search algorithm is defined as a sequential search algorithm, that starts at one end and 
//! goes throught each element of a list  until the desired element is found
//! Time complexity  O(n)


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

    int key;
    cout << "Enter a found key: ";
    cin >> key;

    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout << "Element found " << i << " " << "index";
        }
    }
    cout << "Element is not found";
    return -1;
}