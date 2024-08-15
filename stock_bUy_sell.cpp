//122. Best Time to Buy and Sell Stock II 121. Best Time to Buy and Sell Stock I

#include <bits/stdc++.h>
using namespace std;

void stocks_I(vector<int> arr){
    int buy=INT_MAX;
    int profit=0;

    for(int i=0; i<arr.size(); i++){
        if(arr[i] < buy){
            buy = arr[i];
        }else if(arr[i] - buy > profit){
            profit = arr[i] - buy;
            cout<<"Buy At: "<<buy<<" Sell At: "<<arr[i]<<endl;
        }
    }
    cout<<"Profit for I: "<<profit<<endl;
}

void stocks_II(vector<int> arr){
    int profit = 0;
    for(int i=1; i<arr.size(); i++){
        if(arr[i] > arr[i-1]){
            profit += arr[i] -arr[i-1];
        }

    }
    cout<<"Profit for II: "<<profit<<endl;
}


int main(){
    vector<int> arr;
    int size;
    cout << "size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    stocks_I(arr);
    stocks_II(arr);
    
    return 0;
}