#include<bits/stdc++.h>
using namespace std;

void util(int curr, int& ans)
{

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans = 0;
       vector<int> nums(n,0);
       int negIndex = -1 , lastNegIndex = -1;

        for(int i=0;i<n;i++)
        {
            cin>>nums[i];
            if(negIndex==-1 && nums[i]<=0)
                negIndex = i;
            if(nums[i]<=0)
                lastNegIndex = i;
        }

        
        if(negIndex!=-1 && lastNegIndex!=-1 && negIndex==lastNegIndex) //if only one negative number or 0 is present
        {
            ans = n - 1 ;
        }

        else if(negIndex!=-1 && lastNegIndex!=-1)
        {
            int i = negIndex+1;
            int cnt = 0;
            int maxc = INT_MIN;
            
           
           while(i<lastNegIndex)
           {    cnt = 0;
               while(nums[i]>0)
                    cnt++,i++;
                maxc = max(maxc,cnt);

                i++;
           } 

           cnt = nums.size() - 1 -lastNegIndex+ negIndex;
            
           maxc = max(maxc,cnt);
            ans = maxc;
        }

        else //no negative numbers or zero present
        {
            int minIndex = -1, mini = INT_MAX;
            int cmin = 0;
            for(int i = 0;i<n;i++)
            {
                if(nums[i]<mini){
                    mini = nums[i]; minIndex = i;
                }
                
            }
            int lastMinIndex = upper_bound(nums.begin(),nums.end(),mini) - nums.begin();
            
            if(minIndex==lastMinIndex) ans = n;
        }

        cout<<ans<<endl;

        
    }
    return 0;
}