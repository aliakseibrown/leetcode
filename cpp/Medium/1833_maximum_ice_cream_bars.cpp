class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int ice = 0;
        sort(costs.begin(),costs.end());
        for(auto c:costs){
            coins = coins - c;
            if(coins < 0) return ice;
            ice++;
        }
        return ice;
    }
};
