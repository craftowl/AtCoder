#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool b = false;
    rep(i, n)
    {
        char c = s[i];
        if(c == '|')
        {
            b = !b ? true : false;
        }
        if(b)
        {
            if( c == '*')
            {
                cout << "in";
                return 0;
            }
        }
        
    }

    cout << "out";
}