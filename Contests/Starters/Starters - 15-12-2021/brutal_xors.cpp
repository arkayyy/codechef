#include <bits/stdc++.h>
using namespace std;

#define ll long long

// NOT SOLVEDDDDDDDDDDDD>>>>>>>>XXXXXXXXX>>>>>>>>>>   LOOK FOR SOLUTION
int main()
{
    int MOD = 10000007;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        ll cnt = 0;
        int xorr = -1;
        for (ll i = 0; i <= n; i++)
        {
            for (ll j = i; j <= n; j++)
            {
                if ((xorr ^ (i ^ j)) != 0)
                {
                    xorr ^= (i ^ j);
                    cnt = (cnt + 1) % MOD;
                }
            }
        }
        cout << (cnt % MOD) << endl;
    }

    return 0;
}