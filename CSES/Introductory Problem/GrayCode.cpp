#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to generate Gray codes
vector<string> grayCode(int n)
{
    if (n == 0)
        return {"0"};
    if (n == 1)
        return {"0", "1"};

    // Generate the (n-1) Gray code
    vector<string> previousGray = grayCode(n - 1);

    vector<string> newGray;

    // Add '0' to the prefix of the previous Gray code
    for (const string &code : previousGray)
    {
        newGray.push_back("0" + code);
    }

    // Add '1' to the prefix of the reversed previous Gray code
    for (auto it = previousGray.rbegin(); it != previousGray.rend(); ++it)
    {
        newGray.push_back("1" + *it);
    }

    return newGray;
}

int main()
{
    int n;
    cin >> n;

    // Get the Gray code for the given length
    vector<string> grayCodes = grayCode(n);

    // Print the Gray code
    for (const string &code : grayCodes)
    {
        cout << code << endl;
    }

    return 0;
}