//LEETCODE 704
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() - 1;
        int low = 0; 
        int high = n;
        while(low <= high){
            int k = low + (high - low)/2;
            if (nums[k] == target)
                return k;
            else if (nums[k] > target)
                high = k - 1;
            else 
                low = k + 1;  
        }
        return -1;
    }
};