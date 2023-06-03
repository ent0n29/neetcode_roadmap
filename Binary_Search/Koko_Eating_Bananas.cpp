//LEETCODE 875
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        int left = 1;
        int right = 1000000000;
        while(left < right){
            int mid = (left + right) / 2;
            int ans = 0;
            for(int p : piles)
                ans += (p + mid - 1) / mid;
            if(ans > H)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};