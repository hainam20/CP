#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n, a;
    cin >> n;
    long long arr[n] = {0};

    for (long long i = 0; i < n - 1; i++)
    {
        cin >> a;
        arr[a - 1]++;
    }

    for (long long i = 0; i < n; i++)
    {
        if (arr[i] < 1)
        {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> numbers(n - 1);
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> numbers[i];
    }

    // Calculate the expected sum of the first n natural numbers
    int expected_sum = n * (n + 1) / 2;

    // Calculate the actual sum of the provided n-1 numbers
    int actual_sum = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        actual_sum += numbers[i];
    }

    // The missing number is the difference between the expected sum and the actual sum
    int missing_number = expected_sum - actual_sum;

    cout << missing_number << endl;

    return 0;
}
*/