class RecentCounter {
public:
    queue<int>number;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        number.push(t);

        while(!number.empty() && number.front()<t-3000){
            number.pop();
        }
        return number.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */