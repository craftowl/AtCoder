#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

void swapPair(pair<double, int>& x, pair<double, int>& y)
{
    pair<double, int> tmp(x);
    x = y;
    y = tmp;
}

int main()
{
    ll n;
    cin >> n;
    vector< pair<double, int> > h;
    rep(i, n)
    {
        ll a, b;
        cin >> a >> b;
        double suc = a / (a+b);
        h.push_back(make_pair(suc, i+1));
    }

    rep(i, n)
    {
        for(int j=i+1; j < n; ++j)
        {
            if(h[i].first == h[j].first)
            {
                if(h[i].second > h[j].second )
                {
                    swapPair(h[i], h[j]);
                }
            }
            else if(h[i].first < h[j].first)
            {
                swapPair(h[i], h[j]);
            }
        }
    }
    
    rep(i, n)
        cout << h[i].second;

    return 0;
}