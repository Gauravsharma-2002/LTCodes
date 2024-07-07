class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int price = prices[0];
        int prof = 0;
        int size = prices.size();
        for(int i =0 ;i<size;i++){
            if(prices[i]<price){
                price = prices[i];
            }else if(prices[i]-price > prof){
                prof = prices[i]-price;
            }
        }
        return prof;
    }
};