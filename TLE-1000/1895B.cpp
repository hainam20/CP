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
    ll n;
    cin >> n;
    vector<ll> min1, min2;

    while (n--)
    {
        ll m, x;
        vector<ll> a;
        cin >> m;
        for (ll i = 0; i < m; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        min1.push_back(a[0]);
        min2.push_back(a[1]);
    }
    sort(min2.begin(), min2.end());
    sort(min1.begin(), min1.end());

    ll ans = 0;
    for (ll i = 1; i < min2.size(); i++)
    {
        ans += min2[i];
    }
    cout << ans + min1[0] << endl;
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
