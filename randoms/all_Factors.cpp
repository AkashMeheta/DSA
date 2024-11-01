#include <bits/stdc++.h>
using namespace std;


void factors(int n){
    int c = 0;
    vector<int> ls;

    for(int i = 1; i*i<=n; i++){
        if(n%i == 0){
            ls.push_back(i);
            if(n/i != i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto i: ls){
        cout<<i<<" ";
    }
}

// void GCD(int a, int b)
// {
//     while (a > 0 && b > 0)
//     {
//         if (a < b)
//         {
//             b = b % a;
//         }
//         else
//         {
//             a = a % b;
//         }
//     }
//     if (a == 0)
//     {
//         cout << b;
//     }
//     else
//     {
//         cout << a;
//     }
// }

int GCD(int a, int b){
    while(a > 0 && b > 0){
        if(a<b){
            b = b%a;
        }else{
            a = a%b;
        }
    }
    if(a==0){
        cout<<b;
        return b;
    }else{
        cout<<a;
        return a;
    }
}
void LCM(int a, int b){
    int res = (a / GCD(a,b)) * b;
    cout<<"LCF is "<<res;
}
void prime(int a){
    int c = 0; 
    for(int i=1; i*i<=a; i++){
        if(a%i == 0){
            c++;
            if(a/i != i) c++;
        }
    }
    if(c == 2){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    factors(n);
    cout << endl;
    GCD(n, m);
    cout<<endl;
    LCM(n,m);
    cout<<endl;
    prime(n);
    return 0;
}