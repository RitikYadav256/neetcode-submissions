class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(auto k:s){
            mp[k]++;
        }
        for(auto k:t){
            mp[k]--;
        }
        for(auto k:mp){
            if(k.second!=0){
                return false;
            }
        }
        return true;
    }
};
