class Solution {
public:
    string centerString(const string &s,int left,int right){
        while(left>=0 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
        if(s.length()<0){
            return "";
        }
        string longest="";
        for(int i=0;i<s.size();i++){
            string oddSubstring = centerString(s,i,i);
            if(oddSubstring.length()>longest.length()){
                longest=oddSubstring;
            }
            string evenSubstring=centerString(s,i,i+1);
            if(evenSubstring.length()>longest.length()){
                longest=evenSubstring;
            }am
        }
        return longest;
    }
};