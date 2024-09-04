class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        if(nums.size()==1){
            return 0;
        }

        sort(nums.begin(),nums.end());
        int minvalue=nums[nums.size()-1]-nums[0];

        for(int i=0;i<nums.size()-1;i++){
            int minvaluee=min(nums[0]+k,nums[i+1]-k);
            int maxvaluee=max(nums[nums.size()-1]-k,nums[i]+k);

            minvalue=min(minvalue,maxvaluee-minvaluee);
        }
        return minvalue;
    }
};