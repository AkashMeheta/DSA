#include <bits/stdc++.h>
using namespace std;

vector<int> fibonachi(int num){
    
    vector<int> fibo;
    fibo.push_back(0);
    fibo.push_back(1);
    int i = 2;
    while(i <= num){
        int temp = fibo[i-2] + fibo[i-1];
        fibo.push_back(temp);
        i++;
    }
    return fibo;
    
}


int main(){
    int num;
    cout<<"Enter the number of times: ";
    cin>>num;

    vector<int> res = fibonachi(num);
    
    for(auto x: res){
        cout<<x<<" ";
    }

    return 0;
}