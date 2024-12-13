#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr,int n,int m,int maxAllowedPage){
    int student=1;
    int page=0;

    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPage){
            return false;
        }
        if(page+arr[i]<=maxAllowedPage){
            page+=arr[i];
        }
        else{
            student++;
            page=arr[i];
        }
    }
    return student > m ? false : true;
}

int allocateBook(vector<int>&arr,int n,int m){

    if(m>n){
        return -1;
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int start=0;
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

