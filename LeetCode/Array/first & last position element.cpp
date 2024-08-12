class Solution {
public:

 int first(vector<int>& arr , int n , int target){
    int ans =-1;
    int start = 0;
    int end = n-1;
    while (start <= end){
        int  mid = start + ( end - start )/ 2;
        if (target ==  arr[mid]){
            ans = mid;
            end = mid -1;
        }
        else if (target > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return ans ;
}


int last(vector<int>& arr , int n , int target){
    int ans =-1;
    int start = 0;
    int end = n-1;
    while (start <= end){
        int mid = start + ( end - start )/ 2;
        if (target ==  arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if (target > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }

    }
    return ans ;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int First   = first(nums , n ,target);
        int Last = last(nums , n ,target);

   return {First , Last};
   
    }
};