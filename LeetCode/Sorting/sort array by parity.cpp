class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>odd,even;
        for(const auto &i:nums){
            if(i%2==0){
                even.push_back(i);
            }else{
                odd.push_back(i);
            }
        }
        for(const auto &i:odd){
            even.push_back(i);
        }
        return even;
    }
};