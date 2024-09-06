class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_element=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max_element){
                max_element=nums[i];
            }else{
                sum+=max_element-nums[i]+1;
                max_element++;
            }
        }
        return sum;
    }
};  