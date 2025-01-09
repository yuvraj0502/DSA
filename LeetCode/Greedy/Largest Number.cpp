#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static bool compare(string a,string b){
        return a+b>b+a;
    };

    string largestNumber(vector<int>& nums) {
        vector<string>result;

        for(int i=0;i<nums.size();i++){
            result.push_back(to_string(nums[i]));
        };
        sort(result.begin(),result.end(),compare);
        if(result[0]=="0"){
            return "0";
        };
        string ans="";
        for(int i=0;i<result.size();i++){
            ans+=result[i];
        };
        return ans;

    }
};