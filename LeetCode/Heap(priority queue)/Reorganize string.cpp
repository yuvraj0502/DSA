class Solution{
    public:
    string reorganizeString(string s){
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string ans="";
        while(pq.size()>1){
            auto[f1,c1]=pq.top();
            pq.pop();
            auto[f2,c2]=pq.top();
            pq.pop();
            ans+=c1;
            ans+=c2;
            if(f1>1){
                pq.push({f1-1,c1});
            }
            if(f2>1){
                pq.push({f2-1,c2});
            }
        }
        if(pq.size()==1){
            auto[f,c]=pq.top();
            if(f>1){
                return "";
            }
            ans+=c;
        }
        return ans;

    }
};