/*The function def ProductSmallestPair(sum, arr) accepts an integers sum and an integer array arr of size n. Implement the function to find the pair, (arr[j], arr[k]) where j!=k, Such that arr[j] and arr[k] are the least two elements of array (arr[j] + arr[k] <= sum) and return the product of element of this pair*/

#include <bits/stdc++.h>
using namespace std;

int SmallestPair(int sum, vector<int> arr)
{
    int check = 0;
    int result = 0;
    int min = INT_MAX;
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < sum)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < sum)
                {
                    int tempSum = arr[i] + arr[j];
                    if (tempSum <= sum)
                    {
                        check = arr[i] * arr[j];
                        if (check < min)
                        {
                            min = check;
                        }
                    }
                }
            }
        }
    }
    result = min;
    cout << "Result is " << result;
}

int main()
{
    vector<int> arr;
    int size;
    cout << "size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int sum;
    cout << "Sum: ";
    cin >> sum;

    SmallestPair(sum, arr);
    return 0;
}