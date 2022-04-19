/*Solution: O(m*n) for https://leetcode.com/problems/group-anagrams*/
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        
        unordered_map<int,vector<string>> map;
        
        for (auto s:strs) {
            int count = 0;
            
            for (auto i:s) {
                int pos = int(i)- int('a');
                count = count | (1<<pos);
            }           
           
            map[count].push_back(s);            
        }  
        
        for (auto i: map) {
            vector<string> temp;
            
            for (auto j: i.second) {
                temp.push_back(j);
            }
            
            res.push_back(temp) ;
        }
        
        return res;        
    }
