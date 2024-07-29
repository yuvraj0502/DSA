//! Merge sort is sorting algorithm that follows the divide and conquer appoach.
//! Divie   : Divide the list  or array recurvively into two halves until it can  no more  be divided.
//! Conquer : Each subarray  is sorted individually  using the merge sort  algorithm.
//! Merge   : The sorted subarrays are merged back together  in sorted order. The  process continues 
//!           until all elements from both subarrays have been merged.
//! Time complexity : base case O(n log n), when  the array is already sorted or nearly sorted
//!                   average case O(n log n), when the array is randomly ordered
//!                   worst case O(n log n), when the array is sorted in reverse order

#include<bits/stdc++.h>
using namespace std; 

void merge(int arr[] , int l ,int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2]; 

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }

    for(int i=0;i<n2;i++){
        b[i]= arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]= a[i];
            k++;
            i++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }

    while(i<n1){
        arr[k]=a[i];
        k++;
        i++;
    }

    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[] , int l,int r){

    if(l<r){
        int mid = (l+r)/2;
         mergeSort(arr,l,mid);
         mergeSort(arr,mid+1,r);
         merge(arr,l,mid,r);
    }
}

int main(){
    cout << "Enter a size of array!!:";

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){  
        cin >> arr[i];
    }


    cout << "Sorted array is :";
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}