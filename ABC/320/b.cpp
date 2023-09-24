#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int max_len = 0;
    int l, r;
    for( int i = n-1; i >= 0; --i) {
        for( int j = i; j < n; ++j) {
            if (j - i <= 1) {
                dp[i][j] = (s[i] == s[j]);
            } else {
                dp[i][j] = dp[i + 1][j - 1] && (s[i] == s[j]);
            }
            if (dp[i][j] && max_len < j - i + 1) {
                max_len = j - i + 1;
                l = i;
                r = j;
            }
        }
    }
    cout << max_len << endl;
}