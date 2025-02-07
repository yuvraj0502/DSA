class Solution {
    public:
        vector<int> queryResults(int limit, vector<vector<int>>& queries) {
            unordered_map<int, int> ball_map;  
            unordered_map<int, int> color_freq; 
    
            for (const auto& query : queries) {
                int ball = query[0];
                int color = query[1];
    
           
                if (ball_map.count(ball)) {
                    int old_color = ball_map[ball];
                    color_freq[old_color]--;
                if (color_freq[old_color] == 0) {
                    color_freq.erase(old_color); 
                }
            }
    
                ball_map[ball] = color;
                color_freq[color]++;
                res.push_back(color_freq.size());
        }
    
            return res;
        }
    };