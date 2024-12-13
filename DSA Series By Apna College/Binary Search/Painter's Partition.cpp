#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int>&arr,int n,int m,int maxAllowed){
    int painter=1;
    int board=0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowed){
            return false;
        }
        if(board+arr[i]<=maxAllowed){
            board+=arr[i];
        }
        else{
            painter++;
            board=arr[i];
        }
    }
    return painter>m ? false : true;
}

int allocatePainter(vector<int>&arr,int n,int m){
    if(m>n){
        return -1;
    }

    int sum=0;
    int maxValue=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxValue=max(maxValue,arr[i]);
    }
    int start=maxValue;
    int end=sum;
    int ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int>arr={40,30,10,20};
    int n=4;
    int m=2;

    cout<<allocatePainter(arr,n,m)<<endl;
    return 0;
}