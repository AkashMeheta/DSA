/*You are required to implement the following Function def LargeSmallSum(arr).
The function accepts an integers arr of size ’length’ as its arguments you are required to return the sum of second largest largest element from the even positions and second smallest from the odd position of given ‘arr’.

Code for Finding Second Highest Element with O(n) time and O(1) space
int size = arr.size();
    int first = 0; int second = -1;
    for(int i=1; i<size; i++){
        if(arr[i] > arr[first]){
            second = first;
            first = i;
        }else if(second == -1 || arr[second] < arr[i]){
            second =i;
        }
}*/

#include <bits/stdc++.h>
using namespace std;

void LargeSmallSum(vector<int> arr)
{
    int size = arr.size();

    int Efirst = 0;
    int Esecond = -1;
    int Ofirst = 1;
    int Osecond = -1;

    for (int i = 2; i < size; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[i] > arr[Efirst])
            {
                Esecond = Efirst;
                Efirst = i;
            }
            else if (Esecond == -1 || arr[Esecond] < arr[i])
            {
                Esecond = i;
            }
        }else{
            if (arr[i] > arr[Ofirst])
            {
                Osecond = Ofirst;
                Ofirst = i;
            }
            else if (Osecond == -1 || arr[Osecond] < arr[i])
            {
                Osecond = i;
            }
        }
    }

    cout << "Max Even " << arr[Efirst] << " second " << arr[Esecond] << endl;
    cout << "Max odd " << arr[Ofirst] << " second " << arr[Osecond] << endl;


    int sum = arr[Esecond] + arr[Osecond];
    cout<<"Sum of Even and Odd "<<sum;
    
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
    LargeSmallSum(arr);
    return 0;
}