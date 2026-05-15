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

            map<char,int> temp = mp;   // copy for each start

            int j = i;

            while(j < s.size()){

                if(temp.find(s[j]) != temp.end()){
                    temp[s[j]]--;

                    if(temp[s[j]] == 0){
                        temp.erase(s[j]);
                    }
                }

                if(temp.empty()){
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