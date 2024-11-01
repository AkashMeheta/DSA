#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int remove_duplicates(vector<int> &vec1){
    if(vec1.size() == 0){
        return 0;
    }
    int i=0;
    for(int j=1; j<vec1.size(); j++){
        if(vec1[i] != vec1[j]){
            i++;
            vec1[i] = vec1[j];
        }
        j++;
    }

    return i+1;
}


int main(){

    vector<int> vec1;
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        vec1.push_back(temp);
    }

    for(auto i: vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    int length = remove_duplicates(vec1);
    for(int i=0; i<length; i++){
        cout<<vec1[i]<<" ";
    }


    
    return 0;
}