#include<bits/stdc++.h>
using namespace std;

void showArray(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void showQueue(priority_queue<int,vector<int>,greater<int>>g){
    while(!g.empty()){
        cout<<g.top()<<" ";
        g.pop();
    }
    cout<<endl;
}

int main(){
    int arr[6]={0, 2, 4, 8, 6, 9 };
    priority_queue<int,vector<int>,greater<int>>gqu(arr,arr+6)
    cout<<"Array";
    showArray(arr,6);

    cout<<"Priority Queue!";
    showQueue(gqu);

    return 0;

}