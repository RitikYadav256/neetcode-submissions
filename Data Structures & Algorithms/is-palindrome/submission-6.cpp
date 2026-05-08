class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> arr;

        for(char c:s){
            if(isalnum(c)){
                arr.push_back(tolower(c));
            }
        }
        int i=0;
        int j=arr.size()-1;
        while(i<j){
            if(arr[i]==arr[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
       return true;
    }
};
