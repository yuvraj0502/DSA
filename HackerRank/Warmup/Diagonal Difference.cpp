int diagonalDifference(vector<vector<int>> arr) {
    int lsum=0;
    int rsum=0;
    int len=arr.size();
    for(int i=0;i<arr.size();i++){
        lsum+=arr[i][i];
        rsum+=arr[i][len-1-i];
    }
    return abs(lsum-rsum);
}