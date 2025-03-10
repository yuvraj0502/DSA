class Solution{
    public:
        int vector<int> twoSum(vector<int>& numbers, int target){
            int start=0;
            int end=numbers.size()-1;

            while(start<end){
                int mid=start+(end-start)/2;

                if(numbers[start]+numbers[end]==target){
                    return {start+1,end+1};
                }
                else if(numbers[start]+numbers[end]<target){
                    start++;
                }
                else{
                    end--;
                }
            }
            return {};
        }
}