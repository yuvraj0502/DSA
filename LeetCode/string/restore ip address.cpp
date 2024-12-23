class Solution {
public:
    bool isvalid(const string&part){
        if(part.empty() || part.length() > 3 ){
            return false;
        }
        int num=stoi(part);
        if(num < 0 || num >255){
            return false;
        }
        if(part.length()>1 && part[0]=='0'){
            return false;
        }
        return true;
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string>result;
        int n=s.length();

        if(n<4 || n>12){
            return result;
        }

        for(int i=1;i<min(4,n);i++){
            for(int j=i+1;j<min(i+4,n);j++){
                for(int k=j+1;k<min(j+4,n);k++){
                    string part1=s.substr(0,i);
                    string part2=s.substr(i,j-i);
                    string part3=s.substr(j,k-j);
                    string part4=s.substr(k);

                    if(isvalid(part1) && isvalid(part2) && isvalid(part3) && isvalid(part4)){
                        result.push_back(part1 + "." + part2 + "." +part3 + "." + part4);
                    }
                }
            }
        }
        return result;
    }
};