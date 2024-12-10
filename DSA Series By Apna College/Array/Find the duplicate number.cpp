class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>count;

        for(int i:nums){
            if(count.find(i)!=count.end()){
                return i;
            }
            count.insert(i);
        }
        return -1;
    }

};