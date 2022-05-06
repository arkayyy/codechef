#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll modulo = 1000000007;

ll powerLL(ll x, ll n)
{
    ll result = 1;
    while (n)
    {
        if (n & 1)
            result = result * x % modulo;
        n = n / 2;
        x = x * x % modulo;
    }
    return result;
}

ll chefora(ll noth)
{
    string nos = to_string(noth);
    ll no = noth;
    ll len = 2 * (nos.length()) - 1;
    char ans[len];

    ll ptr = 0;
    ll lo = 0, hi = len - 1;
    //cout << len << endl;

    while (lo <= len / 2 && ptr < len)
    {
        ans[len - lo - 1] = ans[lo] = nos[ptr];
        ptr++;
        lo++;
    }
    // cout << s << endl;

    return (ll)(atoi(ans));
}

int main()
{
    ll k = 1, res = 1;

    ll l = 10, r = 15;
    ll cheforaNo = chefora(l);
    for (ll i = l + 1; i <= r; i++)
    {
        //res *= (ll)pow(cheforaNo, chefora(i));
        res *= (powerLL(cheforaNo, chefora(i)));
    }
    cout << res % modulo << endl;
    //cout << res << endl;
    //cout << modulo << endl;
    return 0;
}