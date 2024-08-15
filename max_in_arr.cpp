#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;


int maxinArr(int arr[]){
    int max=INT_MIN;

    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int secondLargest(int arr[], int size){
    vector<int> vec;
    int second;
    
    for(int i=0; i<size; i++){
        vec.push_back(arr[i]);
    }
    sort(vec.begin(), vec.end());
     cout << "The second largest element is : "<<vec[size-2]<<endl;
}

int Kth_largest_ele(int arr[], int size){
    vector<int> vec;
    int second;
    
    for(int i=0; i<size; i++){
        vec.push_back(arr[i]);
    }
    sort(vec.begin(), vec.end());
     cout << "The second largest element is : "<<vec[size-2]<<endl;
}


int main(){

    int arr[5];
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<5; i++){
        cout<<"Enter "<<i+1<<"th"<< " Element";
        cin>>arr[i];
    }
    for(int i=0; i<5; i++){
        cout<<"Array is"<<arr[i]<<" "<<endl;
    }
    int max = maxinArr(arr);

    int second_largest = secondLargest(arr, size);
    cout<<"Max is "<<max;
    return 0;
}

