#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <cstring>
#include <unordered_map>
using namespace std;

const int MOD = 1000000007;

void solve()
{
    string c;
    int a[26] = {0};
    cin >> c;
    int size = c.length();
    string ans(size, ' ');
    int i = 0;
    // Đếm số lần xuất hiện của mỗi ký tự
    while (c[i] != '\0')
    {
        a[c[i] - 'A']++;
        i++;
    }
    int odd = 0;
    // Đếm số ký tự lẻ của chuỗi
    for (int j = 0; j < 26; j++)
    {
        if (a[j] % 2 != 0)
        {
            odd++;
        }
    }
    // Nếu có 2 ký tự lẻ của chuỗi trở lên sẽ NO SOLUTION
    if (odd > 1)
    {
        cout << "NO SOLUTION";
        return;
    }

    int l = 0, r = size - 1;
    for (int j = 0; j < size; j++)
    {
        if (a[c[j] - 'A'] % 2 != 0)
        {
            ans[size / 2] = c[j];
            a[c[j] - 'A']--;
        }
        while (a[c[j] - 'A'] > 0)
        {
            ans[l++] = c[j];
            ans[r--] = c[j];
            a[c[j] - 'A'] -= 2;
        }
    }
    ans[size] = '\0';
    cout << ans << "\n";
}
int main()
{
    long long t;
    solve();

    return 0;
}