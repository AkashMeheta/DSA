#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){

    string s1;
    cin>>s1;
    cout<<"String 1"<<s1<<endl;

    string s2 = s1;
    reverse(s2.begin(), s2.end());
    
    if(!s1.compare(s2)){
        cout<<"Palindrome";
    }else{
        cout<<"Not Palindrome";
    }
    return 0;
}