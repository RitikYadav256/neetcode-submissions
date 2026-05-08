class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int l:nums){
            mp[l]++;
        }
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        for(auto & s:mp){
            pq.push({s.second,s.first});
        }
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
