class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans=nums;
        for(auto k:nums){
            ans.push_back(k);
        }
        return ans;
    }
};