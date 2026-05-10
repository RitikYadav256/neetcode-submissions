class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=0;
        int cp=prices[0];
        for(int i=1;i<prices.size();i++){
            cp=min(cp,prices[i]);
         if(cp<prices[i]){
            price=max(price,prices[i]-cp);
         }
        }
        return price;
}
}
;
