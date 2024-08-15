#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> merge_Sorted_arr(vector<int> arr1, vector<int> arr2){
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(auto it: arr2){
        arr1.push_back(it);
    }
    sort(arr1.begin(), arr1.end());
    return arr1;
}


int main(){
    vector<int> vec1;
    vector<int> vec2;

    int size1;
    cout<<"Enter vector 1 size ";
    cin>>size1;

    int temp;
    for(int i=0; i<size1; i++){
        cin>>temp;
        vec1.push_back(temp);
    }
    cout << "The vector 1 elements are: "<<endl;
    for (int i = 0; i < vec1.size(); i++){
        cout << vec1[i] << " ";
    }


    int size2;
    cout<<"Enter vector 2 size ";
    cin>>size2;


    for(int i=0; i<size2; i++){
        cin>>temp;
        vec2.push_back(temp);
    }
    cout << "The vector 2 elements are: "<<endl;
    for (int i = 0; i < vec2.size(); i++){
        cout << vec2[i] << " ";
    }

    vector<int> res_arr = merge_Sorted_arr(vec1, vec2);


    cout << "The Result arry elements are: "<<endl;
    for (int i = 0; i < res_arr.size(); i++){
        cout << res_arr[i] << " ";
    }
    return 0;
}