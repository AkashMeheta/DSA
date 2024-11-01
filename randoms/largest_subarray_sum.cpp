#include <bits/stdc++.h>
using namespace std;

void LSS(vector<int> arr){
    int sum = 0;
    int maxi = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        sum +=arr[i];
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    cout<<"Max: "<<maxi;
}

int main(){
    // int n;
    // cin >> n;
    // cin.ignore();

    vector<int> arr;
    int temp;
    string str;
    getline(cin, str);
    stringstream ss(str);
    while (ss >> temp) {
        arr.push_back(temp);
    }

    LSS(arr);
    return 0;
}
//-2 1 -3 4 -1 2 1 -5 4