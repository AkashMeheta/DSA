#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std;

vector<string> store;
void permute(string s, int l, int r){
    
    if(l == r){
        cout<<s<<endl;
        string temp = s;
        store.push_back(temp);
    }
    for(int i=l; i<=r; i++){
        swap(s[l], s[i]);

        permute(s, l+1, r);

        swap(s[l], s[i]);
    }
    
}

int largest_Ele(vector<string> vec){
    vector<int> result;
    for(int i=0; i<vec.size(); i++){
        result.push_back(stoi(vec[i]));
    }

    int max=INT_MIN;
    for(int i=0; i<result.size(); i++){
        if(result[i]>max){
            max=result[i];
        }
    }

    return max;
}

int main(){

    vector<int> vec;
    int size;

    cout<<"Size of array: ";
    cin>>size;
    for(int i=0; i<size; i++){
        int temp;
        cin>>temp;

        vec.push_back(temp);
    }
    
    string str = ""; 
    for(int i=0; i<size; i++){
        str = str + to_string(vec[i]);
    }
    
    int n = str.size(); 
    permute(str, 0, n - 1); 

    int largest = largest_Ele(store);
    cout<<"Largest Permutation is: "<<largest<<endl;

    return 0; 

}