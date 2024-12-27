class Solution {
public:
    bool isPalindrome(int x) {
      
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int result=0;
        int orignial=x;
        while(x>0){
            int digit=x%10;
            if((result>INT_MAX/10) || (result==INT_MAX/10)){
                return false;
            }
            result=result*10+digit;
            x/=10;
        }
        return orignial==result;
    }
};
