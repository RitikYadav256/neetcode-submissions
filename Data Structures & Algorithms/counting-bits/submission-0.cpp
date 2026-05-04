class Solution {
public:
  int find(int n) {
        int count=0;
        while(n>0){
            if(n%2==1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        int i=0;
        while(i<=n){
            ans.push_back(find(i));
            i++;
        }
        return ans;
    }
};
