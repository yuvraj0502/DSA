// -> First increase the size of the heap by 1, so that it can store the new element.
// -> Insert the new element at the end of the heap.
// -> Compare the value of the new node with its parent.
// -> If the value of the new node is greater than the value of its parent, then swap them.
// -> Repeat step 3 until the value of the new node is less than the value of its parent or 
//    the new node reaches the root of the heap.
// -> The new node is now inserted into the heap.
// -> Time Complexity : O(log n)


#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int n,int root){
    int parent=(root-1)/2;
    if(parent>=0){
        if(arr[root]>arr[parent]){
            swap(arr[root],arr[parent]);
            heapify(arr,n,parent);
        }
    }
};

void insertElement(int arr[],int n,int key){
    n=n+1;
    arr[n-1]=key;
    heapify(arr,n,n-1);
};

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    count<<endl;
};

int main(){
    int arr[]={10,5,3,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=15;
    insertElement(arr,n,key);
    printArray(arr,n+1);
    return 0;
}