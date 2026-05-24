#include<bits/stdc++.h>
using namespace std;
int maximumprofit(int prices[],int n){
    int mini = prices[0];
    int maxProfit =0;
   // int n = prices.size();
    for(int i=0;i<n;i++){
        int cost = prices[i]-mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini,prices[i]);
        
    }
    return maxProfit;
}
int main (){
    int n;
    cin >>n;
    int prices[n];
    for(int i=0;i<n;i++){
        cin >> prices[i];
    }
    cout << maximumprofit(prices,n);
    return 0;
}