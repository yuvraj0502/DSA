class Solution {
public:
    string longestPrefix(string s) {
        int n=s.length();
        vector<int>Lps(n,0);
        int len=0;
        int i=1;

        while(i<n){
            if(s[i]==s[len]){
                len++;
                Lps[i]=len;
                i++;
            }else{
                if(len!=0){
                    len=Lps[len-1];
                }else{
                    Lps[i]=0;
                    i++;
                }
            }
        }
        int prefix=Lps[n-1];
        if(prefix==0){
            return "";
        }
        return s.substr(0,prefix);
    }
};