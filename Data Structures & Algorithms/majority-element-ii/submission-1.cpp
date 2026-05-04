class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int k:nums){
            mp[k]++;
        }
        int n=nums.size();
        int m=n/3;
        vector<int> ans;
        for(auto k:mp){
            if(k.second>m){
                ans.push_back(k.first);
            }
        }
        return ans;
    }
};