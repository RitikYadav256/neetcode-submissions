class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int j=t.size();
        int k=s.size();
        bool M=true;
        if(k!=j){
            return false;
        }else{
            while(i<j){
                if(s[i]!=t[i]){
                    return false;
                }
                i++;
            }
        }
        return M;
    }
};
