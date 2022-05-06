#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> nums(n, 0);

        ll maxIndex = -1;
        ll maxi = INT_MIN;

        for (ll i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] >= maxi)
            {
                maxi = nums[i];
                maxIndex = i;
            }
        }

        if (count(nums.begin(), nums.end(), maxi) == n)
            cout << 0 << endl;
        else if (maxIndex == n - 1)
        {
            cout << 1 << endl;
        }
        else
        {

            cout << 2 << endl;
        }
    }

    return 0;
}