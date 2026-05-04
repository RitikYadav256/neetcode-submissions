class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=0;
        vector<int> dup;
        for(auto k:nums){
            if(k!=val){
                dup.push_back(k);
            }
        }
        int k=0;
        for(int i=0;i<dup.size();i++){
            nums[i]=dup[i];
            k++;
        }
        return k;
    }
};