class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> profit(amount+1, amount+1);
        profit[0] = 0;

        for(int i =0; i<coins.size(); ++i){
            for(int j=1; j<=amount; ++j){
                if(j-coins[i] >=0) profit[j] = min(profit[j-coins[i]]+1, profit[j]);
            }         
            }
            return profit[amount] != amount+1 ? profit[amount] : -1;
        }
};
