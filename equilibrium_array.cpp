#include <iostream>
#include <vector>
using namespace std;

bool sum_checker(vector<int> vec, int size, int mid){

    int left_sum=0;
    int right_sum=0;
    for(int i=0; i<mid; i++){
        left_sum = left_sum+vec[i];
    }
    for(int i=mid+1; i<size; i++){
        right_sum = right_sum+vec[i];
    }
    //cout<<"ls"<<left_sum<<" rs "<<right_sum<<endl;
    if(left_sum == right_sum){
        return true;
    }else{
        return false;
    }
}

int equilibrium(vector<int> arr, int size){
    bool flag=false;
    int mid=0;
    int l=0;
    int r=size-1;
    while(mid!=size){
        flag=sum_checker(arr, size, mid);
        if(flag == true){
            return mid;
        }
        
        mid++;
    }
    return -1;
}

int main(){

    vector<int> vec;
    int size;
    cout<<"Size: ";
    cin>>size;
    int temp;
    for(int i=0; i<size; i++){
        cin>>temp;
        vec.push_back(temp);
    }

    cout << "The vector elements are: "<<endl;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    

    int ans = equilibrium(vec, size);
     cout<<"Anwser"<<ans<<endl;
    return 0;
}