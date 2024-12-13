#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int>& arr,int n,int m,int max){
    int cow=1;
    int lastPos=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]-lastPos>=max){
            cow++;
            lastPos=arr[i];
        }
        if(cow==m){
            return true;
        }
    }
    return false;
}

int aggressiveCow(vector<int>& arr,int n,int cow){
    sort(arr.begin(),arr.end());
    
    int start=1;
    int end=arr[n-1]-arr[0];
    int ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(isValid(arr,n,cow,mid)){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr={1,2,8,4,9};
    int n=5;
    int cow=3;

    cout<<aggressiveCow(arr,n,cow)<<endl;
    return 0;
}