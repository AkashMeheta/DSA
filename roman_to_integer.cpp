#include <bits/stdc++.h>
using namespace std;

int roman_to_integer(string s){
    unordered_map<char, int> m;

        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000; 
    int ans = 0;

    for(int i=0; i<s.length(); i++){
        if(m[s[i]] < m[s[i+1]]){
            ans -= m[s[i]];
        }else{
            ans += m[s[i]];
        }
    }
    return ans;
}

string interger_to_roman(int num){
    
    vector<int>val={1000, 900, 500, 400, 100,   90,  50,  40,   10,   9,   5,    4,    1};
    vector<string>ch={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = "";
    int times = 0;

    for(int i=0; i<13; i++){
        times = num/val[i];
        while(times--){
            result += ch[i];
        }
        num = num%val[i];
    }


    return result;
}




int main(){
    string s;
    cin>>s;

    int res = roman_to_integer(s);
    cout<<"Integer: "<<res<<endl;
    string ans = interger_to_roman(res);
    cout<<"Roman: "<<ans<<endl;


    reverse(s);
    return 0;
}