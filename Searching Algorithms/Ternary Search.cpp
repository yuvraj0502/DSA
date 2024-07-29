//! Ternary search array divide into three equal parts
//! Time complexity O(log n base 3)


#include<bits/stdc++.h>
using namespace std;

int TernarySearch(int arr[],int start,int end,int key){
    while(end>=start){
        int mid1=start+(end-start)/3;
        int mid2=end-(end-start)/3;

        if(arr[mid1]==key){
            return mid1;
        }
        if(arr[mid2]==key){
            return mid2;
        }
        if(key<arr[mid1]){
            end=mid1-1;
        }else if(key>arr[mid2]){
            start=mid2+1;
        }else{
            start=mid1+1;
            end=mid2-1;
        }
    }
    return -1;
}


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

    int index=TernarySearch(arr,0,size-1,key);
    (index==-1)? cout <<  "Element not found" : cout << "Element found" << " " << index << " " << "index";
 
    return 0;
}