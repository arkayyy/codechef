#include<bits/stdc++.h>
using namespace std;


int main()
{ ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a="",b="";
        cin>>a;
        cin>>b;

        if(n==1)
            return ((a[0]<b[0])?1:0);

        
        vector<char> dp(n);

        dp[n-1] = (a[n-1]>=b[n-1])?'a':'b';

        for(int i=n-2;i>=0;i--)
        {
            if(a[i]==b[i])
                dp[i] = dp[i+1];
            else if(a[i]<b[i])
                dp[i] = 'b';
            else
                dp[i] = 'a';
        }
    int cnt = 0;
        for(auto i:dp)
        {
            if(i=='b')
                cnt++;
        }

        cout<<cnt<<endl;

    }

    return 0;


}