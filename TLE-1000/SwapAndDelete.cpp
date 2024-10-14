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
    string s;
    cin >> s;

    long long cnt1 = 0, cnt0 = 0, ans = 0;

    for (long long i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == '1')
            ++cnt1;
        else
            ++cnt0;
    }
    string t;
    for (long long i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == '1' && cnt0 > 0)
            --cnt0;
        else if (s[i] == '0' && cnt1 > 0)
            --cnt1;
        else
            break;
    }
    cout << max(cnt0, cnt1) << endl;
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
