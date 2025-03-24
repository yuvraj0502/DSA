#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=5;
    int index=BinarySearch(arr,n,key);
    if(index!=-1){
        cout<<"Element found at index: "<<index;
    }else{
        cout<<"Element not found";
    }
    return 0;
}