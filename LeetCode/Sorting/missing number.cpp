class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int totalsum=(n*(n+1))/2;
        int sum=accumulate(nums.begin(),nums.end(),0);
        return totalsum-sum;
    }
};


// accumalate function returns sum of all the values lying in a range of starting and ending with 
// variable of sum