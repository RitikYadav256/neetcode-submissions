class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort the array
        vector<vector<int>> res;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;  // Skip duplicate numbers

            int j = i + 1, k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0) {
                    res.push_back({nums[i], nums[j], nums[k]});
                    
                    // Skip duplicate values for `j`
                    while (j < k && nums[j] == nums[j + 1]) j++;
                    // Skip duplicate values for `k`
                    while (j < k && nums[k] == nums[k - 1]) k--;

                    j++; 
                    k--;
                } 
                else if (sum < 0) {
                    j++;  // Increase `j` to get a larger sum
                } 
                else {
                    k--;  // Decrease `k` to get a smaller sum
                }
            }
        }
        return res;
    }
};