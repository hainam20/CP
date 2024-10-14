#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <unordered_map>
using namespace std;

const int MOD = 1000000007;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void solve()
{
    long long a, b, c;
    cin >> a >> b >> c;

    if ((2 * b - c) % a == 0 && (2 * b - c) > 0)
    {
        cout << "YES\n";
    }
    else if ((a + c) % (2 * b) == 0)
    {
        cout << "YES\n";
    }
    else if ((2 * b - a) % c == 0 && (2 * b - a > 0))
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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
