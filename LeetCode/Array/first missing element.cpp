class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int count=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==count){
                count++;
            }
        }
        return count;
    }
};