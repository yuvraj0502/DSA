class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty() ||  matrix[0].empty()){
            return 0;
        }
        
        int row=matrix.size();
        int column=matrix[0].size();
        vector<int>height(column+1,0);
        int maxArea=0;

        for(const auto& row:matrix){
            for(int i=0;i<column;i++){
                height[i]=(row[i]=='1')?height[i]+1:0;
            }

            stack<int>st;
            for(int i=0;i<height.size();i++){
                while(!st.empty() && height[i]<height[st.top()]){
                    int h=height[st.top()];
                    st.pop();
                    int w=st.empty()?i:i-st.top()-1;
                    maxArea=max(maxArea,h*w);
                }
                st.push(i);
            }
        }
        return maxArea;
    }
};