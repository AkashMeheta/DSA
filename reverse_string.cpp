#include <iostream>
#include<string>
#include <algorithm> 
using namespace std;



void reverse_string(string& s, int size){
    string rev;
    
    int left = 0;
    int right = size-1;

    while(left<right){
        swap(s[left], s[right]);
        left++;
        right--;
    }
    
}

int main(){

    string s;

    cin>>s;
    int size = s.size();
    cout<<"String: "<< s;
    
    reverse_string(s, size);
    cout<<"Reverse String: "<<s;
    return 0;
}