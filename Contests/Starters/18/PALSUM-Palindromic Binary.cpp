#include <bits/stdc++.h>
using namespace std;

//Very importany function to check if the binary representation of a number is palindrome or not.
bool isGood(unsigned n)
{
    // `rev` stores reverse of a binary representation of `n`
    unsigned rev = 0;

    // do till all bits of `n` are processed
    unsigned k = n;
    while (k)
    {
        // add the rightmost bit to `rev`
        rev = (rev << 1) | (k & 1);
        k = k >> 1; // drop last bit
    }

    // Returns true if `reverse(n)` is the same as `n`
    return n == rev;
}

void expressSum(int curr, int target, string combo, int nos, vector<bool> &goodie, bool &found, vector<vector<bool>> &dp)
{
    if (found) //if already found
        return;
    if (curr > target || nos > 12) //base case
        return;

    if (curr == target) //if found a succesful combination till the end
    {
        cout << nos << endl;
        found = true;
        cout << (combo.substr(0, combo.length() - 1)) << endl;
        return;
    }

    for (int i = target - 1; i >= 0; i--)
    {
        if (!found && target - curr - i >= 0 && goodie[i] && dp[target][target - curr]) //since (target-curr) is the difference that needs to be established, we need to check if
                                                                                        // the element i can be subtracted from this difference (by adding it to current combination) (if difference goes <0 it means its not a valid combo)
                                                                                        //we are also checking that if the element i is a goodie number itself
                                                                                        //and also checking in the dp matrix if there exists a subset in the given array of goodies that can make a sum of (target-curr) i.e the sum that we still need to obtain to complete the combination.
        {
            expressSum(curr + i, target, (combo + to_string(i) + " "), nos + 1, goodie, found, dp);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << endl;
            return 0;
        }

        vector<bool> goodie(n + 1, false);
        vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));

        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = true;
        }

        for (int i = 1; i <= n; i++)
        {
            if (isGood(i))
                goodie[i] = true;
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                dp[i][j] = dp[i - 1][j]; //if current element (i) is not included
                if (j >= i)
                    dp[i][j] = dp[i][j] || (dp[i - 1][j] || dp[i - 1][j - i]); //if i is included in the subset //Bottom up DP tabulation (same as Subset sum problem)
            }
        }

        goodie[0] = true;
        bool found = false;
        expressSum(0, n, "", 0, goodie, found, dp);
    }

    return 0;
}