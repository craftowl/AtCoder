#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(int)(n);++i)

vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;

}
int main()
{
    int n;
    cin >> n;
    vector<ll> div = divisor(n);
    const int divSize = (int)div.size();
    string out = "1";

    rep(i, n+1)
    {
        if(i == 0)
            continue;

        vector<int> tmp;
        rep(d, divSize){
            int j = div[d];
            if( i % n/j == 0)
            {
                tmp.emplace_back(j);
            }
        }
        if(tmp.empty())
            out += '-';
        else
        {
            out += to_string(tmp[0]);
        }
    }
    cout << out;
}