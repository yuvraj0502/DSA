class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        
        if(nums.size()<4){
           return ans;
        }

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++){
            // first duplicate check
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            for(int j=i+1;j<nums.size()-2;j++){
                // second duplicate check
                if(j>i+1 && nums[j]==nums[j-1]){
                  continue;
                }

                int left=j+1;
                int right=nums.size()-1;

                while(left<right){
                    // avoid integer overflow
                    long long sum= static_cast<long long>(nums[i])+nums[j]
                                   +nums[left]+nums[right];

                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[left],nums[right]});

                        // third duplicate check
                        while(left<right && nums[left]==nums[left+1]){
                            left++;
                        }

                        // fourth duplicate check
                        while(left<right && nums[right]==nums[right-1]){
                            right--;
                        }

                        left++;
                        right--;
                    }

                    else if(sum<target){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};