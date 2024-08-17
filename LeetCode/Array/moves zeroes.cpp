class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0;
        while(start<nums.size()-1){
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]==0){
                    swap(nums[i],nums[i+1]);
                }
            }
            start++;
        }
    }
};