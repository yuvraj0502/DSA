class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int size=intervals.size();
        if(size<=0){
            return intervals;
        }
        vector<vector<int>>result;
        int start=intervals[0][0];
        int maxValue=intervals[0][1];

        for(int i=1;i<size;i++){
            if(maxValue<intervals[i][0]){
                result.push_back({start,maxValue});
                start=intervals[i][0];
                maxValue=intervals[i][1];
            }
            else{
                maxValue=max(intervals[i][1],maxValue);
            }
        }
        result.push_back({start,maxValue});
        return result;
    }
};