class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto k:nums){
            if(mp[k]>0){
                return true;
            }
            mp[k]++;
        }
        return false;
    }
};