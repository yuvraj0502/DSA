class Solution {
public:
    int minLength(string s) {
        stack<char>str;
        for(char curr:s){
            if(!str.empty() && 
            ((str.top()=='A' && curr=='B') ||
            (str.top()=='C' && curr=='D'))){
                str.pop();
            }else{
                str.push(curr);
            }
        }
        return str.size();
    }
};