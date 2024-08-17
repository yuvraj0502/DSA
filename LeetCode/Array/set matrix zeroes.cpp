class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        bool zeroFirstRow = false;
        bool zeroFirstCol = false;
        
        
        for (int j = 0; j < column; j++) {
            if (matrix[0][j] == 0) {
                zeroFirstRow = true;
                break;
            }
        }
        
       
        for (int i = 0; i < row; i++) {
            if (matrix[i][0] == 0) {
                zeroFirstCol = true;
                break;
            }
        }
        
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < column; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for (int i = 1; i < row; i++) {
            for (int j = 1; j < column; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        if (zeroFirstRow) {
            for (int j = 0; j < column; j++) {
                matrix[0][j] = 0;
            }
        }
        
        if (zeroFirstCol) {
            for (int i = 0; i < row; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
