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
    
    int m = -1;
    rep(j, 2)
    {
        int cnt = 0;
        bool dng = false;
        rep(i , n)
        {
            if(s[i] == 'o')
            {
                if(dng)
                {
                    cnt++;
                }
                else
                {
                    dng = true;
                    ++cnt;
                }
            }
            else if(s[i] == '-' && dng)
            {
                if(m < cnt )
                    m = cnt;
                dng = false;
                cnt = 0;
            }
            else
            {
                cnt = 0;
                dng = false;
            }
        }
        reverse(begin(s), end(s));
    }

    cout << m;
    return 0;
}