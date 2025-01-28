class Solution{
    public:
       int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, 
       vector<int>& worker){
             vector<pair<int,int>>result;

             for(int i=0;i<difficulty.size();i++){
                result.push_back({difficulty[i],profit[i]});
             }

             sort(result.begin(),result.end());
             sort(worker.begin(),worker.end());

             int jobIndex=0;
             int jobProfit=0;
             int maxProfit=0;

             for(int i:worker){
                while(jobIndex<result.size() && result[jobIndex].first<=i){
                    jobProfit=max(jobProfit,result[jobIndex].second);
                    jobIndex++;
                }
                maxProfit+=jobProfit;
             }
             return maxProfit;
       }
};