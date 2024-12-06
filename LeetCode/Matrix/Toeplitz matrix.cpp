class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int res;
                if(i<1 || j<1){
                    res=matrix[i][j];
                }
                else{
                    res=matrix[i-1][j-1];
                }
                if(matrix[i][j]!=res){
                    return false;
                }
            }
        }
        return true;
    }
};