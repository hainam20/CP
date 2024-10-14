#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <unordered_map>

typedef long long ll;
using namespace std;

const int MOD = 1000000007;

void solve()
{
    ll n, k;

    cin >> n >> k;
    ll product = 1;
    vector<ll> a;
    int even = 0;
    for (ll i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        a.push_back(x);
        if (x % 2 == 0)
            ++even;
    }

    int ans = 10e5 + 6;

    if (k == 4)
    {
        for (ll i = 0; i < n; ++i)
        {
            int cnt = 0;
            while (a[i] % k != 0)
            {
                cnt++;
                a[i] = a[i] + 1;
            }
            ans = min(cnt, ans);
        }
        int temp = max(0, 2 - even);
        cout << min(ans, temp) << endl;
    }
    else
    {
        for (ll i = 0; i < n; ++i)
        {
            int cnt = 0;
            while (a[i] % k != 0)
            {
                cnt++;
                a[i] = a[i] + 1;
            }
            ans = min(cnt, ans);
        }
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}