#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <unordered_map>
using namespace std;

const int MOD = 1000000007;

/**
 * We can assume a > b if not we can swap a, b
 * GCD(a,b) = GCD(a-b, b) if a > b
 *
 */
void solve()
{
    long long a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << " " << 0 << endl;
    }
    else
    {
        long long g = abs(a - b);
        cout << g << " " << min(a % g, g - a % g) << endl;
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
