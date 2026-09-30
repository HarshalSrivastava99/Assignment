class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),best_buy,max_p=0;
        best_buy=prices[0];
        for(int i=0;i<n;i++)
        {
        if(best_buy < prices[i])
        {
            max_p=max(max_p,prices[i]-best_buy);
        }
        best_buy=min(best_buy,prices[i]);
        }
        return max_p;
        
    }
};