//Given a positive integer, N. Find the factorial of N.
#include <bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num == 0){
        return 1;
    }
    return num * factorial(num-1);
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int res = factorial(num);
    cout<<res;
    return 0;
}