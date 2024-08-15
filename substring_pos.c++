#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


int main(){

    string str1;
    string str2;

    cout<<"str1: ";
    getline(cin, str1);
    
    cout<<"str2: ";
    getline(cin, str2);
    
    reverse(str1.begin(),str1.end());
    cout<<"String is: "<<str1<<endl;

    
    int index=str1.find(str2);
    cout<<"Index is: "<<index<<endl;

    return 0;
}