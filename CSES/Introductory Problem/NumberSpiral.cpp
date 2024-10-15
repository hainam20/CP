#include <iostream>
using namespace std;

long long solve(long long x, long long y)
{
    long long result;
    if (x > y)
    {
        if (x % 2 == 0)
            result = x * x - (y - 1);
        else
            result = (x - 1) * (x - 1) + y;
    }
    else
    {
        if (y % 2 != 0)
            result = y * y - (x - 1);
        else
            result = (y - 1) * (y - 1) + x;
    }

    return result;
}

int main()
{

    int t;
    long long y, x;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        cout << solve(x, y) << endl;
    }
    return 0;
}