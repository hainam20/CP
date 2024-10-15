#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

const int MOD = 1000000007;

/**
 * Tổng số tiền trong cả hai đống phải chia hết cho 3.
 * do mỗi lần di chuyển chúng ta đều giảm tổng số lượng tiền trong hai đống đi 3 đồng (hoặc ( 1 + 2 ) (1+2) hoặc ( 2 + 1 ) (2+1)).
 * Và Không có đống nào có số lượng tiền lớn hơn gấp đôi số lượng tiền của đống kia.
 * do cách di chuyển hiệu quả nhất là cân bằng số lượng tiền trong hai đống đảm bảo rằng không có đống nào bị giảm nhanh hơn đống kia.
 */
void solve()
{
    long long x, y;
    cin >> x >> y;
    if (y > 2 * x || (x + y) % 3 != 0 || x > 2 * y)
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}