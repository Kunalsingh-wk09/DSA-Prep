class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int profit=0;

        for(auto i:prices){
            if(i<minprice){
                minprice=i;
            }
            else{profit=max(profit,i-minprice);}
        }
        
    return profit;}
};