// Stock Buy and Sell – Max one Transaction Allowed
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/buy-stock-2

class Solution
{
public:
    int maximumProfit(vector<int> &prices)
    {
        // code here

        int bestBuy = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > bestBuy)
            {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }

        return maxProfit;
    }
};
