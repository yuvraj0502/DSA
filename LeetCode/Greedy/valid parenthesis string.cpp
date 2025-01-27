class Solution{
    public: 
        bool checkValidString(string s){
            stack<char>st;
            stack<char>star;

            for(int i=0;i<s.size();i++){
                if(s[i]=='('){
                    st.push(i);
                }
                else if(s[i]=='*'){
                    star.push(i);
                }
                else{
                    if(!st.empty()){
                        st.pop();
                    }
                    else if(!star.empty()){
                        star.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
            return st.empty();
        }
};