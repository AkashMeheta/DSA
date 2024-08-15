#include<iostream>
#include<algorithm>
#include<vector>
#include <unordered_map>

using namespace std;

int main(){

    vector<int> vec;
    unordered_map<int, int> map;

    int temp;
    for(int i=0; i<5; i++){
        cin>>temp;
        vec.push_back(temp);
    }

    cout << "The vector elements are: "<<endl;
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    
    for(int i=0; i<vec.size(); i++){
        if(map.find(vec[i]) != map.end()){
            map[vec[i]] +=1;
        }else{
            map[vec[i]] = 1;
        }
    }

    for(auto i: map){
        cout<<"Element "<<i.first<<"have "<<i.second<<endl;
    }

    return 0;
}