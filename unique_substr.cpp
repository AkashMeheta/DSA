#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void back(string str){
    if(str.length() == 0){
        return;
    }
    cout<<str;
    back(str.substr(0, str.length()));
    back(str.substr(1, str.length()));
}

int main(){
    string str;
    cin>>str;

    back(str);

    return 0;
}