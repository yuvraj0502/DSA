class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        queue<int>slider;
        vector<int>number;

        for(int i=0;i<nums.size();i++){
            if(!slider.empty() && slider.front()<=i-k){
                slider.pop();
            }
            while(!slider.empty() && nums[slider.back()]<=nums[i]){
                 slider.pop();
            }
            slider.push(i);
            if(i>=k-1){
                number.push_back(nums[slider.front()]);
            }
        }
        return number;
    }
};