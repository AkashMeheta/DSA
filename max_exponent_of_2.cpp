#include<iostream>
#include<climits>
using namespace std;

int numer_of_Expo_of_2(int data){
    int expo=0;
    while(data %2==0){
        data /= 2; 
        expo=expo+1;
    }
    return expo;
}

int MaxExponents(int a, int b){

    int max=INT_MIN;
    int result;
    for(int i = a; i<=b; i++){
        int count =  numer_of_Expo_of_2(i);

        if(count > max){
            max = count;
            result = i;
        }
    }
    return result;
}

int main(){
    int expo_count = numer_of_Expo_of_2(4);
    int result = MaxExponents(10,20);
    cout<<expo_count<<" "<<result;
    return 0;
}