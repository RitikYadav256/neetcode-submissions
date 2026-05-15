class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        for(int i=0;i<nums.size()-k+1;i++){
            int maxEle=INT_MIN;
            for(int j=i;j<i+k;j++){
                maxEle=max(maxEle,nums[j]);
            }
            ans.push_back(maxEle);
        }
        return ans;
    }
};
