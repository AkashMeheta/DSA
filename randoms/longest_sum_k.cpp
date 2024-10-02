//Input: arr[] = { 10, 5, 2, 7, 1, 9 }, k = 15 Input: arr[] = {-5, 8, -14, 2, 4, 12}, k = -5 Output: 5
#include<bits/stdc++.h>
using namespace std;

void subarr(vector<int>& arr, int k) {
    int size = arr.size();
    int l = 0; 
    int r = 0; 
    int maxlen = 0; 
    int sum = 0;  // initialize sum as 0
    int maxl = -1;

    // Sliding window to find the maximum length subarray with sum == k
    while (r < size) {
        sum += arr[r];

        // Adjust left boundary until sum is <= k
        while (l <= r && sum > k) {
            sum -= arr[l];
            l++;
        }

        // If sum is exactly k, update max length
        if (sum == k) {
            maxlen = max(maxlen, r - l + 1);
            maxl = l;
        }
        
        r++;  // Move the right boundary to the right
    }

    cout << maxlen << endl;
}

void subarr2(vector<int>& arr, int k){
    unordered_map<int, int> mpp;
    int l=0;
    int r=0;
    int size = arr.size();
    int maxlen = 0;
    int sum=0;

    for(int i=0; i<size;i++){
        sum +=arr[i];

        if(sum == k){
            maxlen = i+1;
        }

        if(mpp.find(sum - k) != mpp.end()){
            maxlen = max(maxlen, i - mpp[(sum - k)]);
        }

        if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    cout<<maxlen;
}


int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<int> arr;
    int temp;
    string str;
    getline(cin, str);
    stringstream ss(str);
    while (ss >> temp) {
        arr.push_back(temp);
    }

    subarr2(arr, n);
    return 0;
}
