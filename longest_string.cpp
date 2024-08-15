#include<iostream>
#include<string>
#include<map>
#include<climits>
using namespace std;

void splitWord(string str){
    int size = str.length();
    string word = "";
    int max=INT_MIN;
    string res;
    map<string, int> map1;


    for(int i= 0; i<size; i++){
        if( str[i] == ' '){
            cout<<word+str[i]<<endl;
            map1[word] = word.length();
            word = "";
        }else if( i == (size-1)){
            string temp = word+str[i];
            cout<<temp<<endl;
            map1[temp] = temp.length();
            word = "";
        }
        else{
            word += str[i];
        }
    }

    for(auto x: map1){
        cout<<x.first<<" "<<x.second<<endl;
        if(x.second > max){
            max = x.second;
            res = x.first;
        }
    }

    cout<<"Largest element is: "<<res<<" with size of "<<max<<endl;
}

int main(){

    string str;
    getline(cin, str);

    cout<<str<<endl;


    map<string, int> map1;

    splitWord(str);
    return 0;
}