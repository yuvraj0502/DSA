class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>spiralmatrix;
        int row_start=0;
        int row_end=matrix.size()-1;
        int column_start=0;
        int column_end=matrix[0].size()-1;


        while(row_start<=row_end && column_start<=column_end){
            for(int i=column_start;i<=column_end;i++){
               spiralmatrix.push_back(matrix[row_start][i]);
            }
            row_start++;

            for(int i=row_start;i<=row_end;i++){
               spiralmatrix.push_back(matrix[i][column_end]);
            }
            column_end--;

            if(row_start<=row_end){
               for(int i=column_end;i>=column_start;i--){
                    spiralmatrix.push_back(matrix[row_end][i]);
                }
            row_end--;
            }

            if(column_start<=column_end){
                for(int i=row_end;i>=row_start;i--){
                     spiralmatrix.push_back(matrix[i][column_start]) ;
                }
            column_start++;
            }         
        }
        return spiralmatrix;      
    }
};