//! It works by repeatedly dividing the search interval in half until the target value is found or the 
//! interval is empty 
//! Time complexity  O(log n)

#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int start,int end,int key){
    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}


int main(){
    int size;

    cout <<  "Enter a size of array: ";
    cin >> size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    int key;

    cout << "Enter a found key: ";
    cin >>key;

    int index=binarySearch(arr,0,size-1,key);
    (index==-1)?cout << "Element not found" : cout << "Element is found" <<" "<< index <<" "<< "index";

    return 0;
}