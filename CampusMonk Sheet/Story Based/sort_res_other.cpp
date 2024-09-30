/*Sort one array according to another array You are given two arrays a[] (integer) and b[] (char). The ith value of a[] corresponds to the ith value of b[]. 
Sort the array b[] with respect to a[].
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    vector<char> arr2;
    map<int, char> rel;

    string str;
    cout<<"Array ";
    getline(cin, str);
    stringstream ss(str);
    string val;
    while(ss >> val){
        arr.push_back(stoi(val));
    }

    string str2;
    cout<<"Array  char";
    getline(cin, str2);
    stringstream ss1(str2);
    char val2;
    while(ss1 >> val2){
        arr2.push_back(val2);
    }

    int size = arr.size();

    for(int i=0; i<size; i++){
        rel[arr[i]] = arr2[i];
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<size; i++){
        cout<<rel[arr[i]]<<" ";
    }
    return 0;
}