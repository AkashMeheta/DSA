//sum of leaders in a array where a ele is a leader if it is larger than it's right element

#include<iostream>
#include<vector>
using namespace std;

int sum_of_leader(vector<int> arr1, int size){
    
    vector<int> leaders;
    int res=0;
    leaders.push_back(arr1[size-1]);
   

    for(int i=size-1; i>0; i--){
        if(arr1[i-1] > arr1[i]){
            leaders.push_back(arr1[i-1]);
        }
    }
    
    cout<<"Leaders are: ";
    for(auto x: leaders){
        cout<<x<<" ";
        res = res + x;
    }
    cout<<endl;

    return res;
}

int main(){
    vector<int> arr;
    int size;
    cout<<"size: ";
    cin>>size;

    for(int i=0; i<size; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"Array is: ";
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    int res = sum_of_leader(arr, size);
    cout<<"Sum of Leader is: "<<res<<endl;
    return 0;

}