class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;
        for(char i:t){
            sum+=i;
        }
        for(char i:s){
            sum-=i;
        }
        return char(sum);
    }
};