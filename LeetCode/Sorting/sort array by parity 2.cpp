class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even,odd;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                odd.push_back(nums[i]);
            }else{
                even.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size()/2;i++){
            nums[2*i]=even[i];
            nums[2*i+1]=odd[i];
        }
        return nums;
    }
};