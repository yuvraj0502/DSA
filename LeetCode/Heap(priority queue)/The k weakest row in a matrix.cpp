class Solution{
    public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k){
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j==1]){
                    count++;
                }
            }
            pq.push({count,i});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>result;
        while(!pq.empty()){
            pq.push_back(pq.top().second());
            pq.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};