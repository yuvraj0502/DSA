class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i=0;i<nums.size();i++){
            // first duplicate check
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }

            int j=i+1;
            int k=nums.size()-1;

            while(j<k){

                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    
                    // second duplicate check
                    while(j<k && nums[j]==nums[j+1]){
                        j++;
                    }


                    // third duplicate check
                    while(j<k && nums[k]==nums[k-1]){
                        k--;
                    }

                    j++;
                    k--;
                }
            }
        }
        return ans;
    }
};