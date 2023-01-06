class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int iceCreams = 0;
        for(int i = 0; i<costs.size(); i++){
            if(costs[i]>coins){
                break;
            }
            coins = coins - costs[i];
            iceCreams++;
        }
        return iceCreams;
    }
};