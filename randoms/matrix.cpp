#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& arr, int row){
    for(int i =0; i<row; i++){
        for(int j = 0; j<i; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0; i<row; i++){
        reverse(arr[i].begin(), arr[i].end());
    }
}

void spiral(vector<vector<int>>& arr){

    int row = arr.size();
    int col = arr[0].size();

    int left=0;
    int top=0;
    int right = col - 1;
    int bottom = row - 1;

    int direction = 0;
    while(top<=bottom && left<= right){
        if(direction == 0){
            for(int i= top; i<=right; i++){
                cout<<arr[top][i]<<" ";
            }
            top++;
        }else if(direction == 1){
            for(int i=top; i<=bottom; i++){
                cout<<arr[i][right]<<" ";
            }
            right--;
        }else if(direction == 2){
            for(int i= right; i>=left; i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
        }else if(direction == 3){
            for(int i= bottom; i>=top; i--){
                cout<<arr[i][left]<<" ";
            }
            left++;
        }

        direction = (direction%4) +1;
    }
}
int main(){
    int row;
    int col;
    cin>>row>>col;
    cin.ignore();

    vector<vector<int>> arr(row, vector<int>(col));

    string input;
    for(int i=0; i<row;i++){
        getline(cin, input);
        stringstream ss(input);
        for(int j=0; j<col; j++){
            ss >> arr[i][j];
        }
    }
    // rotate(arr, row);
    // cout<<endl;

    spiral(arr);
    // Displaying the 2D array
    cout << "The 2D array is:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}