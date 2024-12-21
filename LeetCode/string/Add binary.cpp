class Solution {
public:
    string addBinary(string a, string b) {
        int len1=a.length()-1;
        int len2=b.length()-1;

        int carry=0;
        string result="";

        while(len1>=0 || len2>=0 || carry){
            int num1=(len1>=0) ? a[len1]-'0' : 0;
            int num2=(len2>=0) ? b[len2]-'0' : 0;

            int sum=num1+num2+carry;

            result+=(sum%2)+'0';
            carry= sum/2;

            len1--;
            len2--;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};