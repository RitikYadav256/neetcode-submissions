class Solution {
public:
    bool isValid(string s) {
        stack<int> arr;
        for(auto k:s){
            if(k=='(' || k=='[' || k=='{'){
                arr.push(k);
            }else if(k==')' ||k==']' || k=='}'){
                if(arr.empty()){
                    return false;
                }
               if(arr.top()=='(' && k!=')' || arr.top()=='{' && k!='}' || arr.top()=='[' && k!=']'){
                return false;
               }else{
                arr.pop();
               }
            }
        }
        if(arr.empty()){
            return true;
        }else{
            return false;
        }
    }
};
