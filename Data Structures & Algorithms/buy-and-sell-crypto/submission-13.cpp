class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int l = 0 ;
        int r = 0 ;
        int res = 0 ;
        int n = prices.size() ;

        while(r < n)
        {
            if(prices[l] < prices[r])
            {
                res = max(res,prices[r] - prices[l]);
                 
            }

            else {
                l = r ;
            }

            r ++ ;
        }

        return res ;
    }
};
