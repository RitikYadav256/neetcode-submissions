class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans=strs[0];
        for(auto k:strs){
            int i=0;
            string newStr="";
            while(i < ans.size() && i < k.size() && ans[i]==k[i]){
                newStr+=k[i];
                i++;
            }
            ans=newStr;
        }
        return ans;
    }
};