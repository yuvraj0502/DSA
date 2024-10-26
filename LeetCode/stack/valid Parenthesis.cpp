class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char i:s){
            if(i=='(' || i=='{' || i=='['){
                st.push(i);
            }
            else {
                if(st.empty()){
                    return false;
                }
                char topElement=st.top();
                st.pop();
                if((i==')' && topElement!='(') ||
                   (i=='}' && topElement!='{') ||
                   (i==']' && topElement!='[')){
                    return false;
                   }
            }
        }
        return st.empty();
    }
};