//! Insert an element from unsorted array to its correct position in sorted array
//! Time complexity : base case O(n) , worst & average O(n^2)

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

    for(int i=1;i<size;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    cout << "sorted array" << endl;

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}