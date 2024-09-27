//Given a string S (input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the string: ";
    string str;
    getline(cin, str);

    unordered_map<char, int> freq;

    int size= str.size();
    for(int i=0; i<size; i++){
        if(str[i] == '*'){
            freq['*']++;
        }else if(str[i] == '#'){
            freq['#']++;
        }
    }
    int stars = freq['*'];
    int hash = freq['#'];
    
    if(stars > hash){
        cout<<"+1";
    }else if(stars < hash){
        cout<<"-1";
    }else if(stars == hash){
        cout<<"0";
    }
}