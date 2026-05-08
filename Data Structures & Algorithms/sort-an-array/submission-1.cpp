class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int val=nums[i];
            int k=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]<val){
                    val=nums[j];
                    k=j;
                    }
                }
            swap(nums[i],nums[k]);
        }
        return nums;
    }
};