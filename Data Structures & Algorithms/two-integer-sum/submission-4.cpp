class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
        vector<pair<int, int>> indexedNums; 
        
        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }

       
        sort(indexedNums.begin(), indexedNums.end());

        int i = 0;
        int j = nums.size() - 1;
        vector<int> result;

        while (i < j) {
            int sum = indexedNums[i].first + indexedNums[j].first;

            if (sum == tar) {
                result.push_back(indexedNums[i].second);
                result.push_back(indexedNums[j].second);
                break;
            }
            if (sum > tar) {
                j--;
            } else {
                i++;
            }
        }
        sort(result.begin(),result.end());
        return result;
    }
};