#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;



int main(){

    vector<int> vec1;
    vector<int> vec2;
    int temp;
    for(int i=0; i<5; i++){
        cin>>temp;
        vec1.push_back(temp);
    }

    cout << "The vector elements are: "<<endl;
    for (int i = 0; i < vec1.size(); i++)
        cout << vec1[i] << " ";


    for(int i=0; i<5; i++){
        cin>>temp;
        vec2.push_back(temp);
    }

    cout << "The vector elements are: ";
    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << " ";

    for(int i=0; i<vec1.size(); i++){
        int temp1 = vec1[i];
        auto it = find(vec2.begin(), vec2.end(),temp1);
        if( it != vec2.end()){
            int temp2 =distance(vec2.begin(), it);
            cout<<"Element of array 1 "<<vec1[i]<<"is found on array 2 at"<< temp2;
        }
    }
    return 0;
}