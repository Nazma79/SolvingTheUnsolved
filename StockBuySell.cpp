/*Keep track of minimum price of stock so far. Substract that to present price to get profit made at that day if sold.
Compare with max so far and update max accordingly.*/

int maxProfit(vector<int>& prices) {
       int maxProfit = 0;       
       int minsofar = prices[0];
        for (int i=1; i<prices.size(); i++) {
            if (minsofar>prices[i])
                minsofar = prices[i];
            int profit = prices[i]-minsofar;
            if (maxProfit < profit)
                maxProfit = profit;
        }
        return maxProfit;
    }
