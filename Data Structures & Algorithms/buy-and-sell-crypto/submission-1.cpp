class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max_profit = 0;

        int n = prices.size();

       int min_price = INT_MAX;

       int i = 0;

       while(i < n){

        min_price = min(min_price, prices[i]);

        max_profit = max(max_profit, prices[i] - min_price);
        i++;
       }
     
     return max_profit;
        
    }
};
