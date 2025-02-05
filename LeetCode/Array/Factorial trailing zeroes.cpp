class Solution{
    public:
         int trailingZeroes(int n){
            int zeroCount=0;
            while(n>0){
                zeroCount+=n/5;
                n/=5;
            }
            return zeroCount;
         }
};