#include <iostream>
#include <climits>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    string s;
    cin >> s;
    cout << "String is " << s << endl;

    int i, j, start, end;
    int max = INT_MIN;
    int count = 1;
    int size = s.size();

    for (int i = 0; i < size; i++)
    {
        j = i + 1;

        while (j < size)
        {
            if (s[i] != s[j])
            {
                cout << "i " << s[i] << " j " << s[j] << " c " << count << endl;
                count += 1;
            }
            else
            {
                break;
            }
            j++;
        }
        if (max < count)
        {
            max = count;
            start = i;
            end = j - 1;
        }
        count = 1;
    }

    cout << "longest Substring is" << start << " to " << end;
    cout << "Substring is: ";
    for (int i = start; i <= end; i++)
    {
        cout << s[i];
    }

    return 0;
}


