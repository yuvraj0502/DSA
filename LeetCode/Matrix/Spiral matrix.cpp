class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>spiralMat;

        int rowStart=0;
        int rowEnd=matrix.size()-1;
        int columnStart=0;
        int columnEnd=matrix[0].size()-1;

        while(rowStart<=rowEnd && columnStart<=columnEnd){
            for(int i=columnStart;i<=columnEnd;i++){
                spiralMat.push_back(matrix[rowStart][i]);
            }
            rowStart++;
            
            for(int i=rowStart;i<=rowEnd;i++){
                spiralMat.push_back(matrix[i][columnEnd]);
            }
            columnEnd--;
            if(rowStart<=rowEnd){
                for(int i=columnEnd;i>=columnStart;i--){
                    spiralMat.push_back(matrix[rowEnd][i]);
                }
            rowEnd--;
            }

            if(columnStart<=columnEnd){
                  for(int i=rowEnd;i>=rowStart;i--){
                spiralMat.push_back(matrix[i][columnStart]);
            }
            columnStart++;
            }
            
          
        }
        return spiralMat;
    }
};