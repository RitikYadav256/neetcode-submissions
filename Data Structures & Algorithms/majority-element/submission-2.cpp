class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto k : nums) {
            mp[k]++;
        }
        int majority = nums[0];
        int maxCount = 0;
        for (auto& pair : mp) {
            if (pair.second > maxCount) {
                maxCount = pair.second;
                majority = pair.first;
            }
        }

        return majority;
    }
};
