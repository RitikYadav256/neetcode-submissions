#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        set<int> st(nums.begin(), nums.end());
        nums.assign(st.begin(), st.end()); 
        int l = 0;
        int r = 0;
        int ans = 1;  

        while (r < nums.size() - 1) {
            if (nums[r] + 1 == nums[r + 1]) {
                r++;
            } else {
                ans = max(ans, r - l + 1);
                r++;
                l = r;
            }
        }

        ans = max(ans, r - l + 1); 
        return ans;
    }
};
