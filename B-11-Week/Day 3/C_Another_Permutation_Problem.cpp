#include<bits/stdc++.h>
using namespace std; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        int ans=-1;
        for(int i=1; i<=n; i++)
        {
            for(int pi=1; pi<=n; pi++)
            {
                int maxi=i*pi;
                vector<int>all;
                int cur=0,cost=0;
                for(int idx=n; idx>=1; idx--)
                {
                    int limit=maxi/idx;
                    while(cur < limit && cur < n)
                    {
                        cur++;
                        if(cur != pi) all.push_back(cur);
                    }
                    if(idx==i) continue;
                    if(all.empty())
                    {
                    cost=-1;
                    break;
                    }
                    cost += (idx * all.back());
                    all.pop_back();
                }
                ans=max(ans,cost);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}