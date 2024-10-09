// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// Example 2:
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.


#include <iostream>
#include <vector>
using namespace std;

int max_profit (vector<int> prices){
    int max_profitt = 0;
    int best_buy = prices[0];

    for(int val: prices){
        if(val > best_buy){
            max_profitt = max(max_profitt, val - best_buy);
        }
        best_buy = min(best_buy , val );
    }
    return max_profitt;
}

int main(){
    vector<int> stock_price = {7,1,2,6,5};
    int result = max_profit(stock_price);
    cout << result;



    cout << "\n";
    return 0;
}