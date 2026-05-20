class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;

        for(int i = 0; i < prices.size(); i++)
        {
            int buy = prices[i];
            for(int j = 0; j < prices.size(); j++)
            {
                if(prices[j] - buy > max && j > i)
                {
                    max = prices[j] - buy;
                }
            }
        }
        return max;
    }
};
