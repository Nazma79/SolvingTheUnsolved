int trap(vector<int>& height) {
        /*water at level i = min(maxleft,maxright) - height[i]*/
        int l = 0;
        int r = height.size()-1;
        
        int res = 0;
        
        int leftmax = height[l];
        int rightmax = height[r];
        
        while (l<r) {
            if (leftmax < rightmax) {
                l++;
                leftmax = max(leftmax,height[l]);
                res += (leftmax - height[l]);
            }
            else {
                r--;
                rightmax = max(rightmax,height[r]);
                res += (rightmax - height[r]);
            }
        }
        
        return res;
    }
