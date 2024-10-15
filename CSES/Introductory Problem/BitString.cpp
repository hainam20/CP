#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

const int MOD = 1000000007;
/**
 *  (a+b)%d = ((a%d)+(b%d))%d.
 * 2^2modc=(2modc×2modc).modc
 * 2^3modc=(2^2modc×2modc).modc
 */
int main()
{
    const int MOD = 1000000007;
    long long t;
    cin >> t;
    long long x = 1;
    for (int i = 0; i < t; i++)
    {
        x = 2 * x;
        x = x % MOD;
    }
    cout << x;
    return 0;
}