#include<bits/stdc++.h>
using namespace std;
using ll = long long; 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<ll>a(n);
        priority_queue<ll>pq;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]==0){
                if(pq.empty()) continue;
                ans+=pq.top();
                pq.pop();
            }
            else pq.push(a[i]);
        }
        cout << ans << "\n";
    }
    return 0;
}