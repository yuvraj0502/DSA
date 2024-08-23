class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0){
            return 0;
        }
        unordered_map<int,int>maxcount;
        for(int i:nums){
            maxcount[i]++;
        }
        int count=0;
        for(const auto i:maxcount){
            int j=i.first;
            if(k==0){
                if(i.second>1){
                    count++;
                }
            }
            else{
                if(maxcount.find(j+k)!=maxcount.end()){
                    count++;
                }
            }
        }
        return count;
    }
};