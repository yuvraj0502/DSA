class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n,0));
        int row_start=0;
        int row_end=n-1;
        int column_start=0;
        int column_end=n-1;
        int count=1;


        while(row_start<=row_end && column_start<=column_end){
            for(int i=column_start;i<=column_end;i++){
               matrix[row_start][i] = count++;
            }
            row_start++;

            for(int i=row_start;i<=row_end;i++){
               matrix[i][column_end]=count++;
            }
            column_end--;

            if(row_start<=row_end){
               for(int i=column_end;i>=column_start;i--){
                    matrix[row_end][i]=count++;
                }
            row_end--;
            }

            if(column_start<=column_end){
                for(int i=row_end;i>=row_start;i--){
                     matrix[i][column_start] =count++;
                }
            column_start++;
            }         
        }
        return matrix;   
    }
};