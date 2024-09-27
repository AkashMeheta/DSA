//Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.
#include <bits/stdc++.h>
using namespace std;

void count_digit(int num){
    int val = num;

    while(num != 0){
        int rem = num % 10;
        if(val % rem == 0){
            cout<<rem<<" ";
        }
        num = num/10;
    }
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    count_digit(num); 

    return 0;
}