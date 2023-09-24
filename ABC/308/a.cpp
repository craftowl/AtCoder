#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    ll m = 0;
    int i = 0;
    for( ; i < 8; ++i )
    {
        ll n;
        cin >> n;
        if( n < 100 || 675 < n)
            break;
        if( n % 25 != 0)
            break;
        if( n < m)
            break;
        m = n;
    }
    if( i == 8 )
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
