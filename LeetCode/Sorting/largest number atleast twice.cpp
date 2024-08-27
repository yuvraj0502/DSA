class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxnumber=INT_MIN;
        int count=0;

        for(int i=0;i<nums.size();i++){
            if(maxnumber<nums[i]){
                maxnumber=nums[i];
                count=i;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(maxnumber==nums[i]){
                continue;
            }
            if(maxnumber<(2*nums[i])){
                return -1;
            }
        }
        return count;
    }
};