#include<iostream>
#include<string>
#include<map>
using namespace std;


int count_cost(string s1, string s2){
    map<char, int> map1;
    int count=0;

    for(int i=0; i<s2.length(); i++){
        char ch = s2[i];
        map1[ch]++;
    }
    for(int i=0; i<s1.length(); i++){
        char ch = s1[i];
        map1[ch]--;
    }

    for(auto x: map1){
        if(x.second >= 0){
            count=count+x.second;
        }
    }
    return count;

}


int main(){

    int ans;
    string s1, s2;
    cout<<"Frist: ";
    cin>>s1;
    cout<<endl;
    cout<<"second: ";
    cin>>s2;

    ans = count_cost(s1, s2);
    cout<<"Operation COst: "<<ans<<endl;
    return 0;
}