
int maxProfit(int* prices, int size) {
    if (size == 0) {
        return 0;
    }

    int min_price = prices[0];
    int max_profit = 0;       

    for (int i = 1; i < size; i++) {
       
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            
            int profit = prices[i] - min_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }
    return max_profit;
}
  
