#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <unordered_map>

using namespace std;

const int MOD = 1000000007;

void solve()
{
    long long n, p;
    cin >> n >> p;
    vector<long long> a, b;
    long long x;
    for (long long i = 0; i < n; ++i)
    {
        cin >> x;
        a.push_back(x);
    }
    for (long long i = 0; i < n; ++i)
    {
        cin >> x;
        b.push_back(x);
    }
    vector<pair<long long, long long>> map(n);
    for (long long i = 0; i < n; i++)
    {
        map[i] = make_pair(b[i], a[i]);
    }
    sort(map.begin(), map.end());
    long long cost = 0, res = 0;
    for (long long i = 0; i < n; i++)
    {
        if (map[i].first < p)
        {
            if (res < n - 1)
            {
                cost += map[i].second * map[i].first;
                res += map[i].second;
                if (res >= n)
                {
                    cost -= (res - (n - 1)) * map[i].first;
                    res -= (res - (n - 1));
                }
            }
        }
    }
    cost += ((n - res) * p);
    cout << cost << endl;
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
