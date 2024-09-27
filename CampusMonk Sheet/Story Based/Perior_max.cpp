/*Given an integer array Arr of size N the task is to find the count of elements whose value is greater than all of its prior elements.
 Note : 1st element of the array should be considered in the count of the result. For example, Arr[]={7,4,8,2,9} As 7 is the first element, it will consider in the result. 8 and 9 are also the elements that are greater than all of its previous elements. Since total of 3 elements is present in the array that meets the condition.*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int max = INT_MIN;
    int count = 0;
    vector<int> arr;
    string temp;


    string str;
    cout<<"Enter the Array ";
    getline(cin, str);
    
    stringstream ss(str);
    while( getline(ss, temp, ',') ){ //input type 7,4,8,2,9
        arr.push_back(stoi(temp));
    }
    
    int size = arr.size();

    for(int i = 0; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
            count++;
        }
    }
    cout<<"Count is: "<<count;
    return 0;
}