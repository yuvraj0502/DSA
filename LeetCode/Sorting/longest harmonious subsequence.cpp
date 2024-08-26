class Solution {
public:
    int findLHS(vector<int>& nums) {
        if(nums.size()<2){
            return 0;
        }

        sort(nums.begin(),nums.end());
        int length=0;
        int start=0;

        for(int i=0;i<nums.size();i++){
            while(nums[i]-nums[start]>1){
                start++;
            }
            if(nums[i]-nums[start]==1){
                length=max(length,i-start+1);
            }
        }
        return length;


    }
};