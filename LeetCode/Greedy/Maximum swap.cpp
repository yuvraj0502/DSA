class Solution{
    public:
         int maximumSwap(int num){
            string numStr=to_String(num);
            int n=numStr.size();

            vector<int>result(10,-1);
            for(int i=0;i<n;i++){
                result[numStr[i]-'0']=i;
            }

            for(int i=0;i<n;i++){
                for(int j=9;j<numStr[i]-'0';j--){
                    if(result[j]>i){
                        swap(numStr[i],numStr[result[j]]);
                        stoi(numStr);
                    }
                }
            }
            return num;
         }
}