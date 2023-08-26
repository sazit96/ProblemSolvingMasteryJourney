#include<bits/stdc++.h>
using namespace std; 
using ll= long long;
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n,m,d; cin >> n >> m >> d; 
        vector<int>a(n); for(int i=0;i<n;i++) cin >> a[i];
        ll ans=0,sum=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++)
        {
            if(a[i] > 0)
            {
                sum+=a[i];
                pq.push(a[i]);
            }
            if(pq.size() > m)
            {
                sum-=pq.top();
                pq.pop();
            }
            ans=max (ans,sum-(ll) d*(i+1));
        }
        cout << ans << "\n";
    }
    return 0;
}