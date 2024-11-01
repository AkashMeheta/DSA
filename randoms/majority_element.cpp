#include<bits/stdc++.h>
using namespace std;

void majority(vector<int> arr){
    int n = arr.size();

    int c1=0; int c2=0;
    int el1=INT_MIN; int el2=INT_MIN;

    for(int i = 0; i<n; i++){
        if(c1 ==0 && el2 != arr[i]){
            c1=1;
            el1 = arr[i];
        }else if(c2 ==0 && el1 != arr[i]){
            c2=1;
            el2 = arr[i];
        }else if(arr[i] == el1){
            c1++;
        }else if(arr[i] == el2){
            c2++;
        }else{
            c1--;
            c2--;
        }
    }

    vector<int> res;
    c1=0; c2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == el1) c1++;
        if(arr[i] == el2) c2++;
    }
    int mini = (int)(n/3) + 1;
    if(c1 >= mini){
        res.push_back(el1);
    }
    if(c2>=mini){
        res.push_back(el2);
    }
    sort(res.begin(), res.end());
    for(auto x: res){
        cout<<x<<" ";
    }
}



int main(){
    vector<int> arr;

    string str;
    getline(cin, str);
    stringstream ss(str);
    string temp;
    while(getline(ss,temp,',')){
        arr.push_back(stoi(temp));
    }

    majority(arr);
}