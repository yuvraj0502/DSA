class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        map<int,int>mp;
        sort(arr.begin(),arr.end());
        for(auto i:arr){
            mp[i]++;
        }
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==0){
                continue;
            }
            if(mp[arr[i]*2]>0){
                mp[arr[i]*2]--;
                mp[arr[i]]--;
            }
        }
        for(auto i:mp){
            if(i.second!=0){
                return 0;
            }
        }
        return 1;
    }
};