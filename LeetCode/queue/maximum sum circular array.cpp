class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum=nums[0];
        int currentSum=0;
        queue<int>qu;

        for(int i=0;i<nums.size();i++){
            currentSum+=nums[i];
            qu.push(nums[i]);

            while(currentSum<0 && !qu.empty()){
                currentSum-=qu.front();
                qu.pop();
            }
            maxSum=max(maxSum,currentSum);
        } 
        int TotalSum=accumulate(nums.begin(),nums.end(),0);
    
        for(int i=0;i<nums.size();i++){
            nums[i]=-nums[i];
        }
        int minSum=0;
        currentSum=0;
        for(int i=0;i<nums.size();i++){
            currentSum+=nums[i];
            minSum=min(minSum,currentSum);
            if(currentSum>0){
                currentSum=0;
            }
        }
        if(TotalSum==minSum){
            return maxSum;
        }
        return max(maxSum,TotalSum-minSum);
    }
};