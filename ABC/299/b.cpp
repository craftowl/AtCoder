#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    ll n, t;
    cin >> n >> t;
    ll c[n], r[n];
    rep(i, n)
    {
        cin >> c[i];
    }
    rep(i, n)
    {
        cin >> r[i];
    }
    bool bt = false;
    int p = 0;
    ll pc = c[0];
    ll tmax = 0;
    ll max = 0;
    rep(i, n)
    {
        if(c[i] == t)
        {
            bt = true;
            if(tmax < r[i])
            {
                tmax = r[i];
                p = i;
            }
        }
        else if(bt)
        {
            continue;
        }
        else if(pc == c[i])
        {
            if(max < r[i])
            {
                p = i;
                max = r[i];
            }
        }
    }
    if(bt)
        cout << p+1;
    else
        cout << p+1;
    
    return 0;
}