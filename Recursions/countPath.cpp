#include <bits/stdc++.h>
using namespace std;

int countPath(int s, int e)
{
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }

    int count =0;
    for(int i=1; i<=6; i++){
        count += countPath(s+i, e);
    }
    return count;
}

int main(){

    int count = countPath(0, 8);
    cout<<count;
    return 0;

}