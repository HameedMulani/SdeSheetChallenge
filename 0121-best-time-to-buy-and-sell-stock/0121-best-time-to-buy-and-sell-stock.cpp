class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX; // least so far
        int op = 0; // overall profit
        int pist = 0; // profit if sold today
        
        for(int i = 0; i < prices.size(); i++){
             // if we found new buy value which is more smaller then previous one
            lsf = min(prices[i], lsf); // update our least so far
            
            pist = prices[i] - lsf; // calculating profit if sold today by, Buy - sell
           // if pist is more then our previous overall profit
            op = max(op, pist); // update overall profit

        }
        return op; // return op  
    }
};