#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buystock = 0;
        int sellstock = 1; 
        int maxProfit = 0;

        while (sellstock < prices.size()) {
            int currentProfit = prices[sellstock] - prices[buystock]; 
            if (prices[buystock] < prices[sellstock]) {
                maxProfit = max(currentProfit, maxProfit);
            } else {
                buystock = sellstock;
            }
            sellstock++;
        }
        return maxProfit;
    }
};




int main(){
    int ans;
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    vector<int>prices(n);
    cout<<"Enter the array:";
    for(int i=0;i<n;i++){
    cin>>prices[i];}
    Solution o;
   cout<< o.maxProfit(prices);

return 0;
}