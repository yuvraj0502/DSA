class Solution{
    public:
        int findPeakElement(vector<int>&nums){
            int start=0;
            int end=nums.size()-;

            while(start<end){
                if(nums[i]>nums[i+1]){
                    end=mid;
                }
                else{
                    start=mid+1;
                }
            }
            return start;
        }
};