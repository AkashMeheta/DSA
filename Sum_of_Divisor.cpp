#include<iostream>
#include<vector>
using namespace std;

int sum_of_divisors(int data){
    vector<int> sums;
    int result=0;
    for(int i=1; i<=data; i++){
        if(data % i == 0){
            sums.push_back(i);
        }
    }
    for(int i=0; i<sums.size(); i++){
        cout<<sums[i]<<" "<<endl;
    }
    for(int i=0; i<sums.size(); i++){
        result= result+sums[i];
    }
    return result;
}


int main(){
    int N;
    cin>>N;
    cout<<"N is "<<N<<endl;

    int result=sum_of_divisors(N);
    cout<<"Sum of N's all divisor is "<<result<<endl;
    return 0;
}