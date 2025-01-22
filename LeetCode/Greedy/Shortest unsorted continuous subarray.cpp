class Solution{
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int start=-1;
        int end=-2;
        int min=nums[n-1];
        int max=nums[0];
        
        for(int i=1;i<n;i++){
            max=std::max(max,nums[i]);
            min=std::min(min,nums[n-i-1]);
            if(nums[i]<max){
                end=i;
            }
            if(nums[n-i-1]>min){
                start=n-i-1;
            }
        }
        return end-start+1;
    }
};