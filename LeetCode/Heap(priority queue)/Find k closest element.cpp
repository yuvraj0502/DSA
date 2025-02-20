class Solution{
    public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left=0;
        int right=arr.size()-1;

        while(left<right){
            int mid=right-(right-left)/2;
            if(arr[mid]>x){
                right=mid-1;
            }
            else{
                left=mid;
            }
        }
        
        int i=left;
        int j=left+1;
        vector<int> ans;
        while(k--){
            if(i<0){
                ans.push_back(arr[j++]);
            }
            else if(j>=arr.size()){
                ans.push_back(arr[i--]);
            }
            else if(abs(arr[i]-x)<=abs(arr[j]-x)){
                ans.push_back(arr[i--]);
            }
            else{
                ans.push_back(arr[j++]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;

    }
     
};