//LEETCODE 11
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int area=0;
        while(l<r){
            if(height[l]<height[r]){
                area=max(area,(r-l)*height[l]);
                l++;
            }
            else{
                area=max(area,(r-l)*height[r]);
                r--;
            }
        }
        return area;
    }
};