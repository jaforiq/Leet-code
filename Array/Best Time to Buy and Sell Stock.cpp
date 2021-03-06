class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice= INT_MAX,maxprofit=0;
        for(auto price: prices){
            if(price< minprice)
                minprice = price;
            else if((price- minprice)> maxprofit)
                maxprofit = price - minprice;
        }
        return maxprofit;
    }
};
