// -> Heap sort is a comparison based sorting techinque based on Binary Heap
//    Data structure.

// -> It can be seen as an optimization of selection sort where we first find the 
//    max (or min) element swap it with the last (or first)

// -> First convert the array into a max-heap using heapify.Then one by one 
//    delete the root node element of the max-heap and replace it with the last
//    node and heapify

// -> Rearrange the array element so that they from the max-heap.
//     1. swap the root element of the heap (which is the largest element is current element)
//          with the last element of the heap.
//     2. Remove the last element of the heap(which is now the correct position).
//        we mainly the reduce heap size and do not remove element from the 
//        actual array.
//     3. Heapifly the remaining elements of the heap

// Heap Sort Algorithm:
// 1.Treat the array as a complete binary tree
//    we first need to visualize the array as a complete binary tree.For an array an 
//    of size n,the root is at index 0 the left child of an element at index i
//    as at 2i+1 and right child is at 2i+2.
// 2. Build a max heap from the array
// 3.sort the array by placing largest element at end of unsorted array.

// Time Complexity : O(nlogn)
// Space Complexity : O(1)

#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&arr,int n,int root){
    int largest=root;
    int left=2*root+1;
    int right=2*right+2;

    if(left<n && arr[left]>arr[largest]){
        largest=left;
    }

    if(right<n && arr[right]>arr[largest]){
        largest=right;
    }

    if(largest!=root){
        swap(arr[root],arr[largest]);
        heapify(arr,n,largest);
    }
};


void heapSort(vector<int>&arr){
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }

    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
};

void printArray(vecor<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
};

int main(){
    vector<int>arr={10,5,3,2,4};
    heapSort(arr);
    printArray(arr);
    return 0;
}