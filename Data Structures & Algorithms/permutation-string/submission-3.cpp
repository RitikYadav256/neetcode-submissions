class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s1.length()>s2.length()) return false;
        int k = s1.length();
        sort(s1.begin(), s1.end());

        for(int i = 0; i <= s2.length() - k; i++) {

            string sub = s2.substr(i, k);  // FIXED

            sort(sub.begin(), sub.end());

            if(sub == s1) {
                return true;
            }
        }

        return false;
    }
};