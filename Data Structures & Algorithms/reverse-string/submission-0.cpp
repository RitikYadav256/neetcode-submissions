class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<int> st;
        for(auto k:s){
            st.push(k);
        }
        for(int i=0;i<s.size();i++){
            s[i]=st.top();
            st.pop();
        }
    }
};