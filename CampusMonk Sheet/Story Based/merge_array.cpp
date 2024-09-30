/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n,
representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    vector<int> num1;
    vector<int> num2;

    cout << "Enter m: ";
    cin >> m;
    cout << endl;
    cin.ignore();
 
    string str;
    cout<<"Array ";
    getline(cin, str);
    stringstream ss(str);
    string val;
    while(ss >> val){
        num1.push_back(stoi(val));
    }


    cout << "Enter n: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        num2.push_back(temp);
    }
    for(int i = 0; i<n; i++){
        num1[m+i] = num2[i];
    }
    sort(num1.begin(), num1.end());
    for (auto x : num1)
    {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}