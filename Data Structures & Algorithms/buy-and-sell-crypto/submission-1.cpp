class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;
        int l = 0;
        int r = 0;

        while(r < prices.size())
        {
            if(prices[r] > prices[l])
            maxp = max(maxp, prices[r]-prices[l]);

            else
            l = r;

            ++r;
        }
        return maxp;
    }
};
