#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={0,2,5,3,1,4};

    priority_queue<int>pq;
    cout<<"Array";
    for(auto i:arr){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<6;i++){
        pq.push(arr[i]);
    }

    cout<<"Priority Queue";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}