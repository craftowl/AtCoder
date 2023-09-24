#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    int h,w;
    cin >> h >> w;
    char a[h][w], b[h][w];

    int acnt = 0;
    int ac[h] = {0}; // 行ごとの数
    rep(i, h)
    {
        rep(j,w)
        {
            cin >> a[i][j];
            if(a[i][j] == '#')
            {
                ++acnt;
                ac[i]++;
            }

        }
    }
    int bcnt = 0;
    int bc[h] = {0};
    rep(i, h)
    {
        rep(j,w)
        {
            cin >> b[i][j];
            if(b[i][j] == '#')
            {
                ++bcnt;
                bc[i]++;
            }
        }
    }
    if(acnt != bcnt)
    {
        cout << "No";
        return 0;
    }
    int ans_s=0;
    bool mat = false;
    while(mat)
    {
        int s = 0;
        rep(i, h)
        {
            if( ac[i] == bc[i])
                s++;
        }
        if( s == h)
            mat = true;
        else
        {
            int as = ac[0];
        }
    }

}