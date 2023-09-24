#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    ll n, a,b;
    cin >> n >> a >> b;
    ll ans = a+b;
    int i = 0;
    for(;i <n; ++i)
    {
        ll c = 0;
        cin >> c;
        if(c == ans)
            break;
    }

    cout << i+1 << endl;

}