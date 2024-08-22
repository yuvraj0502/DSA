class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int>element;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            element.insert(nums[i]);
        }
        for(auto it:element){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        if(ans.size()>=3){
            return ans[2];
        }
        else{
            return ans[0];
        }
    }
};