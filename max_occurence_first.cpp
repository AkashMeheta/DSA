#include <iostream>
#include <vector>
#include <map>
#include <climits>
#include <algorithm> 
using namespace std;

void first_max_Occurence(vector<int> arr, int n) {
    map<int, int> map;
    int max = 0;
    vector<int> vec2;

    for (int i = 0; i < arr.size(); i++) {
        map[arr[i]]++;
    }

    for (auto i : map) {
        if (i.second > max) {
            max = i.second;
            vec2.clear();
            vec2.push_back(i.first);
        } else if (i.second == max) {
            vec2.push_back(i.first);
        }
    }

    int item_index = INT_MAX;
    int ele = -1; 

  
    for (int i = 0; i < vec2.size(); i++) {
        int t = vec2[i];
        auto it = find(arr.begin(), arr.end(), t);

        if (it != arr.end()) {
            int index = distance(arr.begin(), it);
            if (index < item_index) {
                item_index = index;
                ele = t;
            }
        }
    }

    if (ele != -1) {  
        cout << "Element is: " << ele << endl;
    } else {
        cout << "No element found." << endl;
    }
}

int main() {
    vector<int> vec;
    int size;
    cout << "Size of array: ";
    cin >> size;
    for (int i = 0; i < size; i++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
 
    first_max_Occurence(vec, size);
    
    return 0;
}
