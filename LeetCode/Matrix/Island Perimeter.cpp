class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter=0;
        int row=grid.size();
        int column=grid[0].size();

        for(int i=0;i<row;i++){
            for(int j=0;j<column;j++){
                if(grid[i][j]==1){
                    perimeter+=4;

                    if(i>0 && grid[i-1][j]==1){
                        perimeter--;
                    }
                    if(i<row-1 && grid[i+1][j]==1){
                        perimeter--;
                    }
                    if(j>0 && grid[i][j-1]==1){
                        perimeter--;
                    }
                    if(j<column-1 && grid[i][j+1]==1){
                        perimeter--;
                    }
                }
            }
        }
        return perimeter;
    }
};