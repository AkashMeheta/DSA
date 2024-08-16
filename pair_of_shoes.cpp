#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void pair_shoes(vector<int> left_ids, vector<int> right_ids){   
    int left  = left_ids.size();
    int right = right_ids.size();

    int count = 0;
    vector<int> result;
    
    sort(left_ids.begin(), left_ids.end());
    sort(right_ids.begin(), right_ids.end());

    int l=0;
    int r=0;

    while(l<left && r<right){
        if(left_ids[l] == right_ids[r]){
            result.push_back(left_ids[l]);
            l++;
            r++;
        }else if(left_ids[l] < right_ids[r]){
            l++;
        }else{
            r++;
        }
    }
    sort(result.begin(), result.end());
    cout << result.size() << endl;
    for (int id : result) {
        cout << id << " ";
    }
    cout << endl;
}


int main() {
    int right, left;
    cin>>left>>right;
    vector<int> left_ids;
    vector<int> right_ids;

    for(int i=0; i<left; i++){
        int temp;
        cin>>temp;
        left_ids.push_back(temp);
    }
    for(int i=0; i<right; i++){
        int temp;
        cin>>temp;
        right_ids.push_back(temp);
    }

    pair_shoes(left_ids, right_ids);

    // for(int i=0; i<left; i++){
    //     cout<<left_ids[i]<<" ";
    // }
    // for(int i=0; i<right; i++){
    //     cout<<right_ids[i]<<" ";
    // }
    return 0;
}