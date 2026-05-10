class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<prices.size();i++){
            if(!pq.empty()){
                int cp=pq.top();
                    price=max(price,prices[i]-cp);
            }
            pq.push(prices[i]);
        }
        return price;
    }
};
