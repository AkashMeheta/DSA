//Given an integer, check whether it is a palindrome or not.
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cout<<"Enter the number or string"<<endl;
    getline(cin, str);
    string rev = str;
    reverse(str.begin(), str.end());
    if(rev == str){
        cout<<"yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}