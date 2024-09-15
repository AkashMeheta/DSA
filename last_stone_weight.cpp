#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int> &stones){
    priority_queue<int> p;
    for(int i=0; i<stones.size(); i++){
        p.push(stones[i]);
    }
    while(p.size() > 1){
        int first = p.top();
        p.pop();
        int second = p.top();
        p.pop();
        int x = first - second;
        if(x>0){
            p.push(x);
        }
    }
    if(p.size() > 0){
        return p.top();
    }else{
        return 0;
    }
}


int main()
{
    vector<int> arr;
    int size;
    cout << "size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int result = lastStoneWeight(arr);
    cout << "Last stone weight " << result;
    return 0;
}