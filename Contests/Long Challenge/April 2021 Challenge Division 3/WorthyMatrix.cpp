#include <bits/stdc++.h>
using namespace std;



int avg(vector<vector<int>> arr,int a1,int a2, int b1, int b2)
{
    int sum=0;
    for(int i=a1;i<=a2;i++)
    {
        for(int j=b1;j<=b2;j++)
            sum+=arr[i][j];
    }

    return sum/((abs(a2-a1)+1)*(abs(b2-b1)+1));
}

int main()
{
    int t, k;
    cin>>t;
    int m,n;
    while((t--)>0)
    {
        cin>>n>>m>>k;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                {int inp;
                cin>>inp;
                arr[i][j]=(inp);}

        for(int i=0;i<n;i++)
           { for(int j=0;j<m;j++)
                cout<<arr[i][j]<<" ";
          cout<<endl; }
    }

    return 0;
}