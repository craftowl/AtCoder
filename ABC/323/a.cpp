#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=1;i<(int)(n);++i)

int main()
{
    string s;
    cin >> s;

    string ans = "Yes";
    rep(i,9) {
        if(s[i*2 - 1] == '1')
        {
            ans = "No";
            break;
        }
    }
    cout << ans;
}