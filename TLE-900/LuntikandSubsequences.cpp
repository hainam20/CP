#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <unordered_map>
using namespace std;

const int MOD = 1000000007;
/**
 * if array have 0, can remain or erase so we have 2
 * if array have 1, can erase so we have 1
 * 2 ^ C0 * C1
 * 2 ^ C0 = 1 << C0
 */
void solve()
{
    long long n;
    cin >> n;
    long long one = 0;
    long long zero = 0;
    for (int i = 0; i < n; ++i)
    {
        long long x;
        cin >> x;
        if (x == 0)
            zero++;
        if (x == 1)
            one++;
    }
    cout << (1ll << zero) * one << '\n';
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
