class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        if(score.size()==0){
            return {};
        }
        
        vector<int>element(score);
        sort(element.begin(),element.end(),greater<int>());
      

        unordered_map<int,string>rank;
        for(int i=0;i<score.size();i++){
            if(i==0){
                rank[element[i]]="Gold Medal";
            }
            else if(i==1){
                rank[element[i]]= "Silver Medal";
            }
            else if(i==2){
                rank[element[i]]="Bronze Medal";
            }
            else{
                rank[element[i]]=to_string(i+1);
            }
        }
        vector<string>ans(score.size());
        for(int i=0;i<score.size();i++){
            ans[i]=rank[score[i]];
        }
        return ans;
    }
};