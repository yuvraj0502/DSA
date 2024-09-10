class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>>ans;
        vector<pair<int,pair<int,int>>>diff;

        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                diff.push_back({abs(i-rCenter)+abs(j-cCenter),{i,j}});
            }
        }
        sort(diff.begin(),diff.end());
        for(auto i:diff){
            ans.push_back({i.second.first,i.second.second});
        }
        return ans;
    }
};