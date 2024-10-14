#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <unordered_map>
using namespace std;

const int MOD = 1000000007;
/**
 * divisible by 25 when end of number is 25, 50, 75, 00
 * Eliminate numbers between i - j and from n -> j
 * j - i - 1 + n - j - 1 = n - 2 - i
 */
void solve()
{
    long long n;
    cin >> n;
    string s = to_string(n);
    int ans = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        for (int j = i + 1; j < s.length(); ++j)
        {
            if (s[i] == '0' && s[j] == '0')
                ans = s.length() - 2 - i;
            if (s[i] == '2' && s[j] == '5')
                ans = s.length() - 2 - i;
            if (s[i] == '5' && s[j] == '0')
                ans = s.length() - 2 - i;
            if (s[i] == '7' && s[j] == '5')
                ans = s.length() - 2 - i;
        }
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
