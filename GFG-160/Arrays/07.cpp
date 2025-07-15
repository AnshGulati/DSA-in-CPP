// Stock Buy and Sell – Multiple Transaction Allowed
// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/stock-buy-and-sell2615

class Solution
{
public:
    int maximumProfit(vector<int> &prices)
    {
        // code here

        int profit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
            {
                profit += prices[i] - prices[i - 1];
            }
        }

        return profit;
    }
};