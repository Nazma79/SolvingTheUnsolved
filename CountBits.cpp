class Solution {
public:
    /*number of 1s in integer i is equal to number of 1s in integer i/2
    if it is even and is equal to number of 1s +1 in integer i/2 if it 
    is odd.*/
    vector<int> countBits(int n) {
       vector<int> res;
        res.push_back(0);
        for (int i=1; i<=n; i++) { 
            if (i%2 == 0) 
                res.push_back(res[i/2]);
            else
                res.push_back(res[i/2]+1); 
        }
        return res;
    }
        
};
