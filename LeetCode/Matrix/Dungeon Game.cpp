class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n=dungeon.size();
        int m=dungeon[0].size();

        vector<vector<int>>health(n+1,vector<int>(m+1,1e5));
        health[n-1][m]=1;
        health[n][m-1]=1;

        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int val=min(health[i][j+1],health[i+1][j])-dungeon[i][j];
                if(val>0){
                    health[i][j]=val;
                }
                else{
                    health[i][j]=1;
                }
            }
        }
        return health[0][0];
    }
};