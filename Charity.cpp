#include<iostream>
#include<math.h>
using namespace std;

int count_coin(int i, int x){
    int count = pow(i, 2);
    return count;
}



int main(){

    int x, i;
    cin>>x;
    cout<<"x is "<<x<<endl;
    cin>>i;
    cout<<"ith day is "<<x<<endl;

    int coins = count_coin(i,x);
    cout<<"HE will donate "<<coins<<" coins"<<endl;

    return 0;
}