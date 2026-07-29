class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit = 0;
        int i = 0;
        int j = 1;

    

        while(j<prices.size()){
            if(prices[i]<prices[j]){
                int profit = prices[j]-prices[i];
                maxProfit = max(profit,maxProfit);
            }
            else{
                i=j;
            }
            j++;

        }

        

        return maxProfit;
    }
};
