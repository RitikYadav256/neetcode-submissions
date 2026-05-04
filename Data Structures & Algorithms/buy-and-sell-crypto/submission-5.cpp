class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int buy=INT_MAX;
        int maxProfit=0;
        while(i<prices.size()-1){
            if(prices[i]<prices[i+1]){
                buy=min(buy,prices[i]);
                maxProfit=max(maxProfit,prices[i+1]-buy);
            }
            i++;
        }
        return maxProfit;
    }
};
