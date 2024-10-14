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
    long long n;
    cin >> n;
    unordered_map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    long long max = 0;
    for (const auto &pair : a)
    {
        if (pair.second >= max)
        {
            max = pair.second;
        }
    }
    int ans = 0;
    while (max < n)
    {
        long long d = min(n - max, max);
        ans += d + 1;
        max += d;
    }
    cout << ans << endl;
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
