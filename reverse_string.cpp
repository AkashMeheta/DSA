#include <iostream>
#include<string>
#include <algorithm> 
#include<vector>
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

void reverse(string s){
    int size = s.length();
    vector<string> vec;
    string word="";

    for(int i=0; i<size; i++){
        if(s[i] == ' '){
            if(word != ""){
                vec.push_back(word);
            }
            word="";
        }else if(i == (size - 1)){
            vec.push_back(word + s[i]);
            word="";
        }else{
            word += s[i];
        }
    }
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<endl;
    }
}


int main(){

    string s;

    getline(cin ,s);
    int size = s.size();
    cout<<"String: "<< s<<endl;
    
    reverse_string(s, size);
    cout<<"Reverse String: "<<s<<endl;

    reverse(s);
    return 0;
}