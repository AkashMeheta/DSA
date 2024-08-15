#include <bits/stdc++.h>
using namespace std;

void decitoNBase(int n, int num){
    string res = "";
    vector<int> vec;

    int quotient = num;
    

    while (quotient != 0){
        vec.push_back(quotient % n);
        quotient = quotient / n;
    }

    for(int i=0; i<vec.size(); i++){
        if(vec[i] > 9){
            res = (char)(vec[i] - 9 + 64) + res;
        }else{
            res = to_string(vec[i]) + res;
        }
    } 
    cout<<res;
}

int main()
{
    int n, num;
    cin >> n >> num;

    decitoNBase(n, num);
    return 0;
}