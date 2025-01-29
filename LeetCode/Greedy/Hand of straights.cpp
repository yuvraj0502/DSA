class Solution{
     public:
         bool isNStraightHand(vector<int>& hand, int groupSize){
            if(hand.size()%groupSize!=0){
                return false;
            }

            map<int,int>count;
            for(int i:hand){
                count[i]++;
            }
            
            for(auto i:count){
                if(i.second>0){
                    for(int j=groupSize-1;j>=0;j--){
                        if(count[i.first+j]<count[i.first]){
                            return false;
                        }
                        count[i.first+j]-=count[i.first];
                    }
                }
            }
            return true;
         }
};