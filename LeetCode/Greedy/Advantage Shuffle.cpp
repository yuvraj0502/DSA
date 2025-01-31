class Solution{
    public:
         vector<int>advantageCount(vector<int>& nums1, vector<int>& nums2){

            multiset<int>st(nums1.begin(),nums1.end());
            vector<int>res;
            for(int i=0;i<nums2.size();i++){
                auto it=st.upper_bound(nums2[i]);
                if(it==st.end()){
                    it=st.begin();
                }
                res.push_back(*it);
                st.erase(it);
            }
            return res;
         }
}