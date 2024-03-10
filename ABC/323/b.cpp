#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> win;
    rep(i,n) {
        string tmp;
        cin >> tmp;
        
        int wincnt = 0;
        rep(j,n){
            if(tmp[j] == 'o')
                ++wincnt;
        }
        win.emplace_back(make_pair(i+1, wincnt));
    }
    sort(win.begin(), win.end(), [](const auto& b, const auto& e) {
        return (b.second > e.second || (b.second == e.second && b < e));
    });

    cout << win[0].first;
    for(int i = 1; i < n; ++i)
    {
        cout << ' ';
        cout << win[i].first;
    }
}