//For a given number n check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.
#include <bits/stdc++.h>
using namespace std;

bool prime(int num){
    for(int i = 2; i<num; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
    
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    bool res = prime(num);
    
    if(res){
        cout<<num<<" is a Prime Number";
    }else{
        cout<<num<<" is Not a Prime Number";
    }
    

    return 0;
}