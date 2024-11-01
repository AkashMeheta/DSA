#include <bits/stdc++.h>
using namespace std;

// int LCSuf(string s1, string s2, int m, int n){
//     if(m==0 || n==0 || s1[m-1] != s2[n-1]){
//         return 0;
//     }
//     return 1 + LCSuf(s1, s2, m-1, n-1);
// }

// int maxCommStr(string s1, string s2){
//     int res = 0;

//     for(int i=1; i<s1.size(); i++){
//         for(int j=1; j<s2.size(); j++){
//             res = max(res, LCSuf(s1, s2, i, j));
//         }
//     }
//     return res;
// }

int LCS(int n, int m, string &s, string &t, vector<vector<int>> &dp){
    if(n<0 || m<0) return 0;

    if(dp[n][m] != -1) return dp[n][m];

    if(s[n] == t[m]) return dp[n][m] = 1 + LCS(n-1, m-1, s, t, dp);

    return max(LCS(n-1, m, s, t, dp), LCS(n, m-1, s, t, dp));
}

int maxCommStr(string &s, string &t){
    int n = s.size();
    int m = t.size();

    vector<vector<int>> dp(n, vector<int>(m,-1));
    return LCS(n-1, m-1, s, t, dp);
}

int main(){
    string s1 = "geeksforgeeks";
    string s2 = "practicewritegeekscourses";
    cout << maxCommStr(s1, s2) << endl;

   
    return 0;
    return 0;
}