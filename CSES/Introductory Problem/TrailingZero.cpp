#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

/**
 * Để tính số lượng số 0 tận cùng trong giai thừa của một số 𝑛 (tức là 𝑛!),
 * chúng ta cần đếm số lần mà 10 là một thừa số trong 𝑛 !.
 * Số 10: Được cấu thành từ 2 × 5
 * Giai thừa 𝑛 !: Là tích của tất cả các số nguyên từ 1 đến 𝑛
 * Khi tính 𝑛 !, chúng ta nhân tất cả các số từ 1 đến 𝑛.
 * Mỗi số 10 trong 𝑛 ! xuất hiện từ một cặp thừa số 2 và thừa số 5.
 * Trong các số từ 1 đến 𝑛, thừa số 2 xuất hiện nhiều hơn thừa số 5 vì số chẵn nhiều hơn số chia hết cho 5.
 * Vì vậy, số lượng thừa số 5 là yếu tố giới hạn số lượng số 10 trong 𝑛 !.
 */
long long trailingZero(long long t)
{
    int count = 0;
    long long n = 5;
    while (n <= t)
    {
        count += t / n;
        n *= 5;
    }
    return count;
}

/**
 * (a*b)%d = ((a%d)*(b%d))%d.
 */
int main()
{
    long long t;
    cin >> t;
    cout << trailingZero(t);
    return 0;
}