class KthLargest {
    private:
        int k;
        priority_queue <int, vector<int>, greater<int>> pq;
    
    public:
        KthLargest(int k, vector<int>& nums) : k(k) {
            for(int a:nums)
            {
                add(a);
            } 
        }
        
        int add(int val) {
            
            if(pq.size() < k)
            {
                pq.push(val);
            }
            else if(val > pq.top())
            {
                pq.pop();
                pq.push(val);
            }
            return pq.top();
        }
    };