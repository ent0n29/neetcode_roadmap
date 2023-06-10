//LEETCODE [15]
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            int target=-nums[i];
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int sum=nums[left]+nums[right];
                if (sum<target)
                    left++;
                else if (sum>target)
                    right--;
                else {
                    vector<int> triplets={nums[i], nums[left], nums[right]};
                    res.push_back(triplets);
                    //the triplets contains 3 numbers, so {[1],[2],[3]}
                    //so we check for duplicates in the positions 1,2,3 respectively.

                    //check duplicates for [2]
                    while(left<right && nums[left]==triplets[1]){
                        left++;
                    }
                    //check duplicates for [3]
                    while(left<right && nums[right]==triplets[2]){
                        right--;
                    }
                }
                //check duplicates for [1]
                while (i+1<nums.size() && nums[i+1]==nums[i])
                    i++;
            }
        }
        return res;
    }
};