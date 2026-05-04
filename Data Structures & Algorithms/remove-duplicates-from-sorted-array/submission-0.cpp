class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> mp;
        int i = 0, j = 0;

        while (j < nums.size()) {
            if (mp.find(nums[j]) == mp.end()) {
                nums[i] = nums[j];
                mp[nums[j]]++; 
                i++;
            }
            j++;
        }

        return i;
    }
};
