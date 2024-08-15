//Given an array of integers, find the maximum subarray sum. A subarray is a contiguous subsequence of the array.
//https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/ (kadane's Algorithm)

#include <bits/stdc++.h>
using namespace std;

int max_subarray_sum(vector<int> arr){
    int maxI = INT_MIN;
    int sum=0;
    int n = arr.size();

    int start = 0;
    int end = 0;
    int s = 0;

    for(int i=0; i<n; i++){
        sum += arr[i];

        if(maxI < sum){
            maxI = sum;
            start = s;
            end = i;
        }

        if(sum < 0){
            sum = 0;
            s = s+1;
        }
    }
    cout<<"Max Subarray Sum's Start index "<<start<<endl;
    cout<<"Max Subarray Sum's End index "<<end<<endl;

    return maxI;
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

    int max_sum = max_subarray_sum(vec);
    cout<<"Max Subarray Sum "<<max_sum<<endl;



    return 0;
}
