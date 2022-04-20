class Solution {
public:
    struct compare {
        bool operator() (pair<int,int> p1, pair<int,int> p2) {
            if (p1.second == p2.second)
                return p1.first < p2.first;
            return p1.second < p2.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> map;
        
        for (auto i: nums) {
            if (map.find(i) == map.end())
                map[i] = 1;
            else
                map[i] += 1;
        }
        
        //maxheap to store the map
        priority_queue<pair<int,int>, vector<pair<int,int>>, compare>       
        pq(map.begin(),map.end());
        
        vector<int> res;
        while (k) {
           res.push_back(pq.top().first);
           pq.pop();
           k--; 
        }
        
        return res;
    }
};
