class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>array(nums.size());
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        int low=0;
        int high=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[low]>nums[high]){
                array[i]=nums[low];
                low++;
            }else{
                array[i]=nums[high];
                high--;
            }
        }
        return array;
    }
};