class Solution {
public:
    int trap(vector<int>& height) {
        int count=0;
        int left=0;
        int right=height.size()-1;
        int leftmax=0;
        int rightmax=0;

        while(left<right){
            if(height[left]<height[right]){
                if(height[left]>=leftmax){
                    leftmax=height[left];
                }else{
                    count+=leftmax-height[left];
                }
                left++;
            }else{
                if(height[right]>=rightmax){
                    rightmax=height[right];
                }else{
                    count+=rightmax-height[right];
                }
                right--;
            }
        }
        return count;
        

    }
};