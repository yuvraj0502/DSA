class Solution{
public:
    int minPatches(vector<int>& nums, int n) {
        long long maxNum=0;
        int count=0;
        int i=0;
        while(maxNum<n){
            if(i<nums.size()&&nums[i]<=maxNum+1){
                maxNum+=nums[i];
                i++;
            }else{
                maxNum+=maxNum+1;
                count++;
            }
        }
        return count;
    }
}