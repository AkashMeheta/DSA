/*A party has been organized on cruise. The party is organized for a limited time(T). The number of guests
entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. The task is to
find the maximum number of guests present on the cruise at any given instance within T hours.
Input :
5 -> Value of T
[7,0,5,1,3] -> E[], Element of E[0] to E[N-1], where input each element is separated by new line
[1,2,1,3,4] -> L[], Element of L[0] to L[N-1], while input each element is separate by new line.
Output :
8 -> Maximum number of guests on cruise at an instance.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cout<<"Enter hour: ";
    cin>>T;

    vector<int> E;
    vector<int> L;

    for(int i=0; i<T; i++){
        int temp;
        cin >> temp;
        E.push_back(temp);
    }
    for(int i=0; i<T; i++){
        int temp;
        cin >> temp;
        L.push_back(temp);
    }

    int maxi=INT_MIN;
    int pre=0;
    
    for(int i=0; i<T; i++){
        pre += E[i];
        pre-=L[i];
        maxi = max(pre, maxi);
    }
    cout<<"Maximum Guest is: "<<maxi<<endl;
    return 0;
}