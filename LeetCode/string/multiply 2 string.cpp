class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0"){
            return "0";
        }

        int len1=num1.size();
        int len2=num2.size();
        vector<int>result(len1+len2,0);

        for(int i=len1-1;i>=0;i--){
            for(int j=len2-1;j>=0;j--){
                int mul=(num1[i]-'0')*(num2[j]-'0');
                int p1=i+j;
                int p2=i+j+1;
                int sum=mul+result[p2];

                result[p2]=sum%10;
                result[p1]+=sum/10;

            }
        }
        string product="";
        for(int i:result){
            if(!(product.empty() && i==0)){
                product+=to_string(i);
            }
        }
        return product;
    }
};