#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec {1,2,3,4,5};
    next_permutation(vec.begin(),vec.begin()+3);
    for(auto i:vec)
    {
        cout<<i<<",";
    }
    int c= 1 & 3;
    int c1=c & 1;
    cout<<c1<<endl;
    return 0;
}