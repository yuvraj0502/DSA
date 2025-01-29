class Solution{
    public:
         bool lemonadeChange(vector<int>& bills){
            int fiveCount=0;
            int tenCount=0;

            for(int i:bills){
                if(i==5){
                    fiveCount++;
                }

                else if(i==10){
                    if(fiveCount>0){
                        fiveCount--;
                        tenCount++;
                    }
                    else{
                        return false;
                    }
                }

                else if(i==20){
                    if(tenCount>0 && fiveCount>0){
                        tenCount--;
                        fiveCount--;
                    }
                    else if(fiveCount>=3){
                        fiveCount-=3;
                    }
                    else {
                        return false;
                    }
                }
            }
            return true;
         }
};