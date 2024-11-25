class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        for(int i=0;i<tickets.size();i++){
            q.push(tickets[i]);
        }
        int time=0;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            time++;

            if(front-1>0){
                q.push(front-1);
            }
            if(tickets.size()-q.size()==k && front==1){
                return time;
            }
        }
        return time;
    }
};