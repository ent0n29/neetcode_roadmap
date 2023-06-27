
//LEETCODE 42
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty())
            return 0;
        
        int l = 0;
        int r = height.size() - 1;
        int leftMax = height[l];
        int rightMax = height[r];
        int water = 0;
        
        while (l < r) {
            if (leftMax < rightMax) {
                l+=1;
                leftMax = max(leftMax, height[l]);
                water += leftMax - height[l];
            } else {
                r-=1;
                rightMax = max(rightMax, height[r]);
                water += rightMax - height[r];
            }
        }
        return water;
    }
};


