#include<bits/stdc++.h>
using namespace std;

bool issafe(vector<vector<int>>& arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y] == 1){
        return true;
    }
    return false;
}

bool ratInMaze(vector<vector<int>>& arr, int x, int y, int n, vector<vector<int>>& sol){
    if(x == n-1 && y == n-1){
        sol[x][y] = 1;
        return true;
    }
    if(issafe(arr, x, y, n)){
        sol[x][y] = 1;
        if(ratInMaze(arr, x+1, y, n, sol)){
            return true;
        }
        if(ratInMaze(arr, x, y+1, n, sol)){
            return true;
        }
        sol[x][y] = 0;
        return false;
    } 
}

int main(){
    int row;
    int col;
    cin>>row>>col;
    cin.ignore();
    
    vector<vector<int>> arr(row, vector<int>(col));
    vector<vector<int>> sol(row, vector<int>(col));

    string input;
    for(int i=0; i<row;i++){
        getline(cin, input);
        stringstream ss(input);
        for(int j=0; j<col; j++){
            ss >> arr[i][j];
        }
    }
   
    cout << "The array is:\n";
        for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
        }
    if(ratInMaze(arr, 0, 0, arr.size(), sol)){
        cout << "The solution array is:\n";
        for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
        }
    }else{
        cout<<"not possible";
    }
    
    
    return 0;
}