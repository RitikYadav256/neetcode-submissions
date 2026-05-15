class Solution {
public:
    string minWindow(string s, string t) {

        map<char,int> mp;

        for(auto ch : t){
            mp[ch]++;
        }

        int st = 0;
        int sizee = INT_MAX;

        for(int i = 0; i < s.size(); i++){

            map<char,int> mp2 = mp;
            int j = i;

            while(j < s.size()){

                if(mp2.find(s[j]) != mp2.end()){
                    mp2[s[j]]--;

                    if(mp2[s[j]] == 0){
                        mp2.erase(s[j]);
                    }
                }

                if(mp2.empty()){
                    int len = j - i + 1;

                    if(len < sizee){
                        sizee = len;
                        st = i;
                    }
                    break;
                }

                j++;
            }
        }

        return (sizee == INT_MAX) ? "" : s.substr(st, sizee);
    }
};