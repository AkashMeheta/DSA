#include <bits/stdc++.h>
using namespace std;

string moveX(string s){
    if(s.length() == 0){
        return "";
    }
    char a = s[0];
    string ans = moveX(s.substr(1));

    if(a == 'x'){
        return ans + a;
    }else{
        return a+ans;
    }
}

int main(){
    string res = moveX("xxabb");
    cout<<res;
    return 0;
}