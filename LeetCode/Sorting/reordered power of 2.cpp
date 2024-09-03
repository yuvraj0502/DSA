class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string a=to_string(n);
        sort(a.begin(),a.end());
        for(int i=0;i<32;i++){
            string reves=to_string(1<<i);
            sort(reves.begin(),reves.end());
            if(a==reves){
                return 1;
            }
        }
        return 0;
    }
};