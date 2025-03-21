class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();

        vector<vector<int>>dp(row,vector<int>(column,0));
        int maxCount=0;

        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(matrix[i][j]=='1'){
                    if(i==0 || j==0){
                        dp[i][j]=1;
                    }
                    else{
                        dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
                    }
                    maxCount=max(maxCount,dp[i][j]);
                }
            }
        }
        return maxCount*maxCount;
    }
};