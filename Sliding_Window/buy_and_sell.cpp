//LEETCODE 121
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int left=0;
        int right=1;
        while (right<prices.size()){
            profit=max(profit,prices[right]-prices[left]);
            if (prices[left]>prices[right]){
                left=right;
                right=right+1;
            }
            else 
                right=right+1;
        }
      return profit;  
    }
};