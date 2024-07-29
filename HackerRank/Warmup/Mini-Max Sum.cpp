void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    
    long minSum=0;
    for(int i=0;i<4;i++){
        minSum+=arr[i];
    }
    long maxSum=0;
    for(int i=1;i<5;i++){
        maxSum+=arr[i];
    }
    cout <<minSum << " " << maxSum;
}