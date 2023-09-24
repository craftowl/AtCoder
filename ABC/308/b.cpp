#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    ll n, m;
    cin >> n >> m;
    string c[n];
    rep(i, n)
    {
        cin >> c[i];
    }
    string d[m];
    rep(i, m)
    {
        cin >> d[i];
    }
    int p[m+1];
    rep(i, m+1)
    {
        cin >> p[i];
    }

    int sum = 0;
    rep(i, n)
    {
        int inx = 0;
        rep(j, m)
        {
            if(c[i] == d[j])
            {
                inx = j+1;
                break;
            }
        }
        sum += p[inx];
    }
    cout << sum;
    return 0;
}