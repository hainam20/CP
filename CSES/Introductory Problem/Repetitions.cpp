#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0, count = 1, max = 0;

    while (s[i] != '\0')
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
            count = 1;

        if (max < count)
            max = count;
        i++;
    }
    cout << max;

    return 0;
}