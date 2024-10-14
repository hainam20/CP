#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <unordered_map>

using namespace std;
const int MOD = 1000000007;
typedef long long ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a;
    ll x;
    for (ll i = 0; i < n; ++i)
    {
        cin >> x;
        x %= k;
        if (x % k == 0)
            x = k;
        a.push_back({x, i + 1});
    }

    sort(a.begin(), a.end(), [](const pair<ll, ll> &p1, const pair<ll, ll> &p2)
         {
             if (p1.first == p2.first)
                 return p1.second < p2.second; 
             return p1.first > p2.first; });

    for (const auto &p : a)
    {
        cout << p.second << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
