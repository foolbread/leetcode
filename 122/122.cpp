class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0)
            return 0;

        int min = prices[0];
        int max = prices[0];
        bool buy = false;
        int profit = 0;

        for (int i=1; i<prices.size(); i++)
        {
            if (prices[i] <= min)
            {
                min = prices[i];
            }
            else
            {
                buy = true;
                max = prices[i];
            }

            if (buy)
            {
                if (max >= prices[i])
                {
                    profit += (max-min);
                    min = prices[i];
                    buy = false;
                }
                else
                {
                    max = prices[i];
                }
            }
        }

        return profit;
    }
};
