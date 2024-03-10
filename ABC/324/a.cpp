#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    ll n;
    cin >> n;
    int a = 1;
    rep(i,n)
    {
        int tmp = 0;
        cin >> tmp;
        if(i==0)
        {
            a = tmp;
        }
        else if(a != tmp)
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}