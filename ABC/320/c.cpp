#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    ll n;
    cin >> n;
    string s[3] = {};
    cin >> s[0] >> s[1] >> s[2];

    int min = 99999;
    rep(i, 3){
        string si = s[i];
        int inx1 = i == 0 ? 1 : 0;
        int inx2 = i == 0 ? 2 : i == 1 ? 2 : 1;
        rep(j,n){
            char c = si[j];
            int ans = j;
            int tmp = s[inx1].find(c);
            if(tmp < 0 )
                continue;
            ans += tmp == j ? n : tmp;
            int tmp2 = s[inx2].find(c);
            if(tmp2 < 0)
                continue;
            if(tmp != tmp2)
            {
                ans -= tmp > tmp2 ? abs(tmp-tmp2) : abs(tmp2-tmp);
            }
            ans += tmp2 == j ? n : tmp2;
            if(min > ans)
                min =  ans;
        }
    }
    cout << min << endl;
}
/*
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    ll n;
    cin >> n;
    string s[3] = {};
    cin >> s[0] >> s[1] >> s[2];

    int min = 99999;
    rep(i, 3){
        string si = s[i];
        int inx1 = i == 0 ? 1 : 0;
        int inx2 = i == 0 ? 2 : i == 1 ? 2 : 1;
        rep(j,n){
            char c = si[j];
            int ans = j;
            int tmp = s[inx1].find(c);
            if(tmp < 0 )
                continue;
            int tmp2 = s[inx2].find(c);
            if(tmp2 < 0)
                continue;
            
            if(tmp == tmp2)
            {
                if(tmp == j)
                    ans += n*2;
                else
                    ans += tmp + n;
            }
            else if(tmp > tmp2)
            {
                if( tmp == j)
                {
                    if( tmp2 > j)
                        ans += tmp2-j +abs(tmp-tmp2);

                }
                    
                ans += 
            }
            else
            {

            }
            if(min > ans)
                min =  ans;
            cout << ans << endl;
        }
    }
    cout << min << endl;
}
*/