#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate_at_K(vector<int>& arr, int k) {
    int size = arr.size();
    k = k%size;
    if (k < 1 || k > arr.size()) {
        cout << "Invalid value of k" << endl;
        return;
    }
    
    reverse(arr.begin(), arr.end());
    cout << "The vector elements after first sort are: " << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    reverse(arr.begin(), arr.begin() + k);
    cout << "The vector elements after second sort are: " << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    reverse(arr.begin() + k, arr.end());
    cout << "The vector elements after third sort are: " << endl;
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    vector<int> vec;

    int size;
    cout << "Size: ";
    cin >> size;

    int temp;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        vec.push_back(temp);
    }

    int k;
    cout << "K is: ";
    cin >> k;

    cout << "The vector elements are: " << endl;
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
    cout << endl;

    rotate_at_K(vec, k);

    return 0;
}
