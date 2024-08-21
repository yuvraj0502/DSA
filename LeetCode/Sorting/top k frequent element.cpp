class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // find the every element count
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }

        // create pair vector element and then sort the element count sorting order
        vector<pair<int,int>>count(freq.begin(),freq.end());
        sort(count.begin(),count.end(),[](const pair<int,int>&a,
            const pair<int,int>&b){
                return a.second>b.second;
            });
        
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(count[i].first);
        }
        return ans;
    }
};
