#include <iostream>
using namespace std;

int main()
{
    int64_t n, m, k, l;
    cin >> n >> m >> k >> l;
    if (n - k < l || (k+l + m-1) / m * m > n) {
        cout << -1 << endl;
    } else {
        cout << (k+l + m-1) / m << endl;
    }
}

//第一题难以理解
