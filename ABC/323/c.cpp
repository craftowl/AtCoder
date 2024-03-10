#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> a;
    rep(i,m){
        int tmp;
        cin >> tmp;
        a.emplace_back(make_pair(i,tmp));
    }

    vector<string> s;
    rep(i,n){
        string tmp;
        cin >> tmp;
        s.emplace_back(tmp);
    }

    vector<int> scnt;
    rep(i,n){
        int score = 0;
        rep(j,m){
            if(s[i][j] == 'o')
                score += a[j].second;
        }
        scnt.emplace_back(score+i);
    }
    cout << a[0].first << a[0].second;
    sort(a.begin(), a.end(),[](const auto& b, const auto& e){
        return b.second > e.second;
    });

    cout << a[0].first << a[0].second;
    const int smax = *max_element(scnt.begin(), scnt.end());
    // const auto maxit = find(scnt.begin(), scnt.end(), smax);
    // const int maxinx = distance(scnt.begin(), maxit);
    
    vector<int> anscnt;
    rep(i,n){
    //   if(i == maxinx)
    //   {
    //     anscnt.emplace_back(0);
    //     continue;
    //   }
        
        int ans = 0;
        rep(j,m){
            if(scnt[i] >= smax)
                break;

            if(s[i][a[j].first] == 'x' )
            {
                scnt[i] += a[j].second;
                ++ans;
            }
        }
        anscnt.emplace_back(ans);
    }
    rep(i,n){
        cout << anscnt[i] << endl;
    }
}