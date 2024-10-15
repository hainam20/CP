#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    long long n, a, step = 0;
    cin >> n;
    vector<long long> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        x.push_back(a);
    }

    for (int i = 1; i < n; i++)
    {
        if (a < x[i - 1])
            a = x[i - 1];

        if (x[i] < a)
            step += a - x[i];
    }
    cout << step;
    return 0;
}