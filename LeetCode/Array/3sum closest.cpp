class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        long long colset=INT_MAX;

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
           int j=i+1;
           int k=nums.size()-1;

           while(j<k){
             long long  sum=static_cast<long long>(nums[i])+nums[j]+nums[k];

             if(abs(sum-target) < abs(colset-target)){
                colset=sum;
             }
             else if(sum<target){
                j++;
             }
             else if(sum>target){
                k--;
             }
             else{
                return sum;
             }
           }
        }
        return colset;
    }
};