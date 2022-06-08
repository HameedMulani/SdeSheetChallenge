class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0]; // 7, 1, 1, 1, 1, 1 
        int maxProfit = 0; // 0, 0, 4, 4, 5
        
        for(int i = 0; i < prices.size(); i++){
            
            minPrice = min(prices[i], minPrice);
            int curProfit = prices[i] - minPrice; // 0, 0, 4, 2, 5, 3
            maxProfit = max(curProfit, maxProfit);
        }
        return maxProfit;
        
    }
};