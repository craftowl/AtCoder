#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    ll n, m, p;
    cin >> n >> m >> p;
    int cnt = 0;
    rep(i,n){
        if( i+1 == m){
            ++cnt;
            m += p;
        }
    }
    cout << cnt;
    return 0;
}