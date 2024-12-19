class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int maxLength=0;
        unordered_set<char>seen;

        for(int i=0;i<s.length();i++){
            while(seen.find(s[i])!=seen.end()){
                seen.erase(s[start]);
                start++;
            }
            seen.insert(s[i]);
            maxLength=max(maxLength,i-start+1);
        }
        return maxLength;
    }
};