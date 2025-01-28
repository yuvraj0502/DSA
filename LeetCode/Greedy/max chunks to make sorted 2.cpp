class Solution{
    public:
        int maxChunksToSorted(vector<int>&arr){
            vector<int>sortedArr=arr;
            sort(sortedArr.begin(),sortedArr.end());

            int maxfar=-1;
            int chunks=0;


            for(int i=0;i<arr.size();i++){
                maxfar=max(maxfar,arr[i]);

                if(maxfar==sortedArr[i]){
                    chunks++;
                }
            }
            return chunks;
        }
};