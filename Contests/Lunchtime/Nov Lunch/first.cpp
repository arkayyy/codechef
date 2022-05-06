#include<bits/stdc++.h>
using namespace std;

int modulo = 998244353;

int weight(vector<int>& nums)
{int w=0;
    for(int i = 0;i<nums.size();i++)
    {
        w += ((i+1)*(nums[i]));
    }
    return w;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        vector<int> nums(n,0);
        
        for(int i = 1;i<=n;i++)
            nums[i-1] = i;

        int factorial = 1;

        for(int i=1;i<=n;i++)
            factorial *= i;

        int sum = 0;

        sum+=weight(nums);
        
        while(next_permutation(nums.begin(),nums.end()))
        {
            sum += weight(nums);
        }



        cout<< ((sum*(1/factorial))%modulo)<<endl;
    }

    return 0;

}