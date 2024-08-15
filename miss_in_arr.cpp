#include <iostream>
#include <climits>
using namespace std;


int missinArr(int arr[], int size){
    
    
    int miss = 0;

    for(int i=0; i<size-1; i++){
        if(arr[i+1] != arr[i]+1){
            miss=arr[i]+1;
        }
    }
    return miss;
}

int main(){

    int arr[5];
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<5; i++){
        cout<<"Enter "<<i+1<<"th"<< " Element";
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    int miss = missinArr(arr, size);
    cout<<"Miss is "<<miss;
    return 0;
}

