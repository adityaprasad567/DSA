#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int maxProfit(vector<int> &prices){
    int mini = prices[0];
    int maxxProfit=0;
    int n = prices.size();
    for(int i =1;i<n;i++){
        int cost=prices[i]-mini;
        maxxProfit=max(maxxProfit,cost);
        mini=min(mini,prices[i]);
    }
    return maxxProfit;
}
int main(){
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter prices: ";
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }

    int result = maxProfit(prices);

    cout << "Maximum Profit: " << result;

    return 0;
}