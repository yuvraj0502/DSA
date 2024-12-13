class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;

        for(int i=0;i<nums1.size();i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int totalNumber=ans.size();

        if(totalNumber%2==1){
            return static_cast<double>(ans[totalNumber/2]);
        }else{
            int mid1=ans[totalNumber/2-1];
            int mid2=ans[totalNumber/2];
            return (static_cast<double>(mid1)+static_cast<double>(mid2))/2.0;
        }

    }
};