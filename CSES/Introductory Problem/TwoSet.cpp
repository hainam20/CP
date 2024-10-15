#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    long long t;
    vector<long long> a, b;
    cin >> t;

    long long totalSum = (t * (t + 1)) / 2;

    if (totalSum % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        cout << "YES" << endl;

        if (t % 2 == 0)
        {
            for (int i = 0; i < t / 2; i++)
            {
                if (i % 2 == 0)
                {
                    a.push_back(i + 1);
                    a.push_back(t - i);
                }
                else
                {
                    b.push_back(i + 1);
                    b.push_back(t - i);
                }
            }

            cout << a.size() << endl;
            sort(a.begin(), a.end());
            for (long long n : a)
            {
                cout << n << " ";
            }
            cout << endl
                 << b.size() << endl;
            sort(b.begin(), b.end());
            for (long long n : b)
            {
                cout << n << " ";
            }
        }
        else
        {
            for (int i = 0; i < t / 2; i++)
            {
                if (i % 2 == 0)
                {
                    a.push_back(i + 1);
                    a.push_back(t - 1 - i);
                }
                else
                {
                    b.push_back(i + 1);
                    b.push_back(t - 1 - i);
                }
            }
            b.push_back(t);
            cout << a.size() << endl;
            sort(a.begin(), a.end());
            for (long long n : a)
            {
                cout << n << " ";
            }
            cout << endl
                 << b.size() << endl;
            sort(b.begin(), b.end());
            for (long long n : b)
            {
                cout << n << " ";
            }
        }
    }

    return 0;
}