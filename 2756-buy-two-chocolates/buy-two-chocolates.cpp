class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int rem = money - (prices[0] + prices[1]);
        return (rem<0) ? money : rem;
        // if(money>=(prices[0]+prices[1])){
        //     return {money-(prices[0]+prices[1])};
        // }else{
        //     return money;
        // }
    }
};