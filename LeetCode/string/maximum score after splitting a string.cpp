class Solution {
public:
    int maxScore(string s) {
        int leftZero=0;
        int rightOne=0;

        for(char i:s){
            if(i=='1'){
                rightOne++;
            }
        }
        int maxScore=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0'){
                leftZero++;
            }
            else{
                rightOne--;
            }
            int score=leftZero+rightOne;
            maxScore=max(maxScore,score);
        }
        return maxScore;
    }
};