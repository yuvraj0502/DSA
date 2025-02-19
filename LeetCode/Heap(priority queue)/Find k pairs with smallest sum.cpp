class Solution{
    public: 

    bool compare(pair<int,int>&a, pair<int,int>&b){
        return a.first+a.second > b.first+b.second;
    };

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>result;
        if(num1.empty() || num2.empty() || k==0){
            return result;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, compare> pq;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(pq.size()<k){
                    pq.push({nums1[i], nums2[j]});
                }else{
                    if(nums1[i]+nums2[j] < pq.top().first+pq.top().second){
                        pq.pop();
                        pq.push({nums1[i], nums2[j]});
                    }
                }
            }
        }
        while(!pq.empty()){
            result.push_back({pq.top().first, pq.top().second});
            pq.pop();
        }
        return result;
    }
}