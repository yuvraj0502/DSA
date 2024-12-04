class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9]={false};
        bool column[9][9]={false};
        bool box[9][9]={false};

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char num=board[i][j];
                if(num=='.'){
                    continue;
                }
                int number=num-'1';
                int boxIndex=(i / 3) * 3 + j / 3; 

                if(row[i][number] || column[j][number] || box[boxIndex][number]){
                    return false;
                }
                row[i][number]=true;
                column[j][number]=true;
                box[boxIndex][number]=true;
            }
        }
        return true;
    }
};