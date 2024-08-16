#include<bits/stdc++.h>
using namespace std;

void spiral_Matrix(vector<vector<int>> arr){
    vector<int> res;

    int row = arr.size();
    int col = arr[0].size();

    int top=0;
    int left=0;

    int bottom=row-1;
    int right=col-1;

    int direction =0;

    while(top<=bottom && left <= right){
        if(direction == 0){
            for(int i=top; i<=right; i++){
                res.push_back(arr[top][i]);
            }
            top++;
        }else if(direction == 1){
            for(int i = top; i<=bottom; i++){
                res.push_back(arr[i][right]);
            }
            right--;
        }else if(direction == 2){
            for(int i = right; i>=left; i--){
                res.push_back(arr[bottom][i]);
            }
            bottom--;
        }else if(direction == 3){
            for(int i = bottom; i>=top; i--){
                res.push_back(arr[i][left]);
            }
            left++;
        }

        direction = (direction%4) + 1;
    }


    cout<<"SPiral Matrix is: ";
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}

int main(){
    int row, col;
    cout<<"number of rows: ";
    cin>>row;
    cout<<"number of COls: ";
    cin>>col;
    vector<vector<int>> matrix(row, vector<int>(col));
    

    cout << "Enter elements of matrix A (" << row << "x" << col << "):" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Given matrix C: " << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    spiral_Matrix(matrix);

    return 0;
}