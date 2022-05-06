#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10, p = 9, k = 10;

    if (p < k)
        cout << p * (((n - 1) / k) + 1) + 1 << endl;
    else if (p % k == 0)
        cout << (p / k) + 1 << endl;
    else if ((n - 1) % k == 0)
        cout << ((((n - 1) / k) + 1) + (((n - 1) / k) * (p / k)) - ((n - 1 - p) / k)) << endl;
    else
        cout << (((p % k) + 1) * (((n - 1) / k) + 1)) - ((n - 1 - p) / k) << endl;

    return 0;
}