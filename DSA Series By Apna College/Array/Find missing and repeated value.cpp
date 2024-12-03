class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set<int>st;
        int missing=-1;
        int duplicate=-1;
        int n=grid.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int num=grid[i][j];
                if(st.count(num)){
                    duplicate=num;
                }
                else{
                    st.insert(num);
                }
            }
        }
        for(int i=1;i<=n*n;i++){
            if(!st.count(i)){
                missing=i;
                break;
            }
        }
        return {duplicate,missing};
    }
};