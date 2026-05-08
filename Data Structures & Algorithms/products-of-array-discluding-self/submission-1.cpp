class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalProduct=1;
        int count=0;
        for(auto k:nums){
            if(k!=0){
                totalProduct*=k;
            }else{
                count++;
            }
        }   

        vector<int> ans;
        if(count==0){
            for(int i=0;i<nums.size();i++){
                ans.push_back(totalProduct/nums[i]);
            }
        }else if(count==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    ans.push_back(totalProduct);
                }else{
                    ans.push_back(0);
                }      
            }
        }else{
             for(int i=0;i<nums.size();i++){
                ans.push_back(0);
            }
        }
        return ans;
    }
};
