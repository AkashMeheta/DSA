#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    
    int num=1;
    int N;
    cout<<"N";
    cin>>N;

    for(int i=1; i<=N; i++){
        for(int j=0; j<i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
    return 0;
}