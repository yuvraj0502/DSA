//! Find the minimun element in unsorted array & swap it with element at begining
//! Time complexity = O(n^2)

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

    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    cout << "sorted array" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}