/*You are given an array prices where prices[i] is the price of a given stock on the ith
day.
You want to maximize your profit by choosing a single day to buy one stock and
choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve
any profit, return 0.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int buy=INT_MAX;
    int sell = INT_MIN;
    
    vector<int> arr;

    string str;
    cout<<"Array ";
    getline(cin, str);
    stringstream ss(str);
    string val;
    while(ss >> val){
        arr.push_back(stoi(val));
    }

    int profit = 0;
    for(int i = 0; i<arr.size(); i++){
        if(arr [i] < buy){
            buy = arr[i];
        }else if(profit < arr[i]-buy){
            sell = arr[i];
            profit = arr[i]-buy; 
        }
    }
    cout<<profit;
    return 0;
}