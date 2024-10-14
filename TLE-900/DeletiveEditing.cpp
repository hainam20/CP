#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

const int MOD = 1000000007;

void solve()
{
    string s, t, ans = "";
    cin >> s >> t;
    int sizeS = s.length();
    int sizeT = t.length();
    int i = 0, j = 0;
    int a[30]{0};
    for (int i = 0; i < sizeT; i++)
    {
        a[t[i] - 'A']++;
    }
    for (int i = sizeS; i >= 0; --i)
    {
        if (a[s[i] - 'A'])
        {
            ans += s[i];
            a[s[i] - 'A']--;
        }
    }
    reverse(ans.begin(), ans.end());
    if (ans == t)
        cout << "YES\n";
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
