//For a given number n check if it is prime or not. A prime number is a number which is only divisible by 1 and itself.
#include <bits/stdc++.h>
using namespace std;

bool prime(int num){
    int c1=0;
    for(int i = 1; i*i<=num; i++){
        if(num%i == 0){
            c1++;
            if(num/i != i) c1++;
        }
    }
    if(c1 == 2) return true;
    
    return false;
    
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