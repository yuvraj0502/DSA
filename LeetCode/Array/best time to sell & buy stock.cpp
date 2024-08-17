class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum=INT_MIN;
        int minimum=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minimum=min(minimum,prices[i]);
            maximum=max(maximum,prices[i]-minimum);
        }
       return maximum;
    }
};