class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(auto k:nums2){
            nums1[m]=k;
            m++;
        }
        sort(nums1.begin(),nums1.end());

    }
};