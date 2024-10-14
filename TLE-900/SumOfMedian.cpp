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
    long long n, k;
    cin >> n >> k;
    vector<long long> a;
    for (long long i = 0; i < n * k; ++i)
    {
        long long x;
        cin >> x;
        a.push_back(x);
    }
    long long sum = 0;

    long long index = n / 2;
    for (long long i = n * k - 1; i >= 0 && k > 0; --i)
    {
        if (index == 0)
        {
            sum += a[i];
            index += n / 2;
            --k;
        }
        else
            --index;
    }
    cout << sum << endl;
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
