class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>freq;
        for(auto i:order){
            freq[i]=0;
        }
        for(auto i:s){
            if(freq.find(i)!=freq.end()){
                freq[i]++;
            }
        }
        string ans;
        for(auto i:order){
            ans.append(freq[i],i);
        }
        for(auto i:s){
            if(freq.find(i)==freq.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};