//LEETCODE 347
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int n : nums){
            mp[n]++;
        }

        vector<int> res;
        //pair<first,second>: first is frequency, second is number
        priority_queue<pair<int, int>> pq;
        for(auto it = mp.begin(); it != mp.end(); it++){
            pq.push(make_pair(it->second, it->first));
            if(pq.size() > (int)mp.size() - k){
                res.push_back(pq.top().second);
                pq.pop();
            }
        }
        return res;
    }
};