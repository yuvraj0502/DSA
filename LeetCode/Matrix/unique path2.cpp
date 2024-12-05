class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        
        vector<vector<int>>result(m,vector<int>(n,0));

        if(obstacleGrid[0][0]==0){
             result[0][0]=1;
        }
        for(int i=1;i<m;i++){
            if(obstacleGrid[i][0]==0){
                result[i][0]=result[i-1][0];
            }
        }
        for(int i=1;i<n;i++){
            if(obstacleGrid[0][i]==0){
                result[0][i]=result[0][i-1];
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]==0){
                    result[i][j]=result[i-1][j]+result[i][i-1];
                }
            }
        }
        return result[m-1][n-1];

        

    }
};