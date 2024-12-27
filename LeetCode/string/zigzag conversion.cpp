class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows ==1){
            return s;
        }
        vector<string>row(min(numRows, int(s.size())));
        int currentRow=0;
        bool isCheck=false;

        for(char i:s){
            row[currentRow]+=i;
            if(currentRow==0 || currentRow==numRows-1){
                isCheck=!isCheck;
            }
            currentRow+=isCheck?1:-1;
        }
        string result;
        for(const string&i:row){
            result+=i;
        }
        return result;
    }
};