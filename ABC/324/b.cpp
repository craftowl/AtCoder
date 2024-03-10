#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repll(i,n) for(ll i=0;i<(ll)(n);++i)


int main()
{
    ll n;
    cin >> n;
    while(true)
    {
        if(n%2==0)
        {
            n /= 2;
            continue;
        }
        else if(n%3==0)
        {
            n /= 3;
            continue;;
        }

        if(n == 1)
        {
            cout << "Yes";
            break;
        }
        else
        {
            cout << "No";
            break;
        }
    }
    
}