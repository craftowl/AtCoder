#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define repi(i,n) for(int i=0;i<n;++i)

bool canTransform(string t, string s) {
    int tsize = (int)t.size();
    int ssize = (int)s.size();
    if(abs(tsize - ssize > 1))
        return false;

    unordered_map<char, int> cnt;
    for(char c : t) ++cnt[c];
    for(char c : s)
    {
        if( cnt[c] > 0)
            --cnt[c];
    }

}


int main()
{
    int n;
    cin >> n;
    string t;
    cin >> t;
    vector<int> ans;
    repi(i,n)
    {
        string s;
        cin >> s;

        if(canTransform(t,s))
            ans.emplace_back(i+1);
    }

    cout << ans.size() << endl;
    for(int a : ans)
    {
        cout << a << " ";
    }

}