class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> k;
        int i=0;
        int j=numbers.size()-1;
        int sum;
        while(i<j){
            sum=numbers[i]+numbers[j];
            if(sum==target){
                k.push_back(i+1);
                k.push_back(j+1);
            }
            if(sum<target){
                i++;
            }else{
                j--;
            }
        }
        return k;
    }
};
